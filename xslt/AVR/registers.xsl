<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:exsl="http://exslt.org/common" extension-element-prefixes="exsl">
 <xsl:output method="text" omit-xml-declaration="yes" indent="no"/>
 <xsl:strip-space elements="*"/>
 <xsl:include href='../lib/FORMAT.xsl'/>


 <xsl:template match="avr-tools-device-file">

  <xsl:for-each select="devices/device/address-spaces/address-space">
   <xsl:call-template name="listregisters">
    <xsl:with-param name="addrspace" select="@id"/>
   </xsl:call-template>
  </xsl:for-each>

  <xsl:call-template name="listextrabitfields"/>

 </xsl:template>


 <xsl:template name="listregisters">
  <xsl:param name="addrspace"/>
  <xsl:variable name="modnames" select="/avr-tools-device-file/devices/device/peripherals/module[instance/register-group[@address-space=$addrspace]]"/>
  <xsl:if test="count(exsl:node-set($modnames)) &gt; 0">
   <!-- List all addr space registers -->
   <xsl:call-template name="header1">
    <xsl:with-param name="str" select="concat(translate($addrspace, 'abcdefghijklmnopqrstuvwxyz' , 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'), ' REGISTERS')"/>
   </xsl:call-template>
   <xsl:text>;&#10;</xsl:text>
   <xsl:for-each select="/avr-tools-device-file/modules/module[@name=exsl:node-set($modnames)/@name]/register-group/register[not(@name=preceding::register/@name)]">
    <xsl:sort select="@offset" order="descending"/>
    <xsl:variable name="regs_offset">
     <xsl:call-template name="MAPPED_IO_offset">
      <xsl:with-param name="addrspace" select="$addrspace"/>
      <xsl:with-param name="addr" select="@offset"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:variable name="captionmark">
     <xsl:call-template name="MAPPED_IO_caption">
      <xsl:with-param name="addrspace" select="$addrspace"/>
      <xsl:with-param name="addr" select="@offset"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:call-template name="out">
     <xsl:with-param name="name" select="@name"/>
     <xsl:with-param name="value" select="concat(@offset, '-', $regs_offset)"/>
     <xsl:with-param name="valuebase" select="16"/>
     <xsl:with-param name="comment" select="concat($captionmark, @caption)"/>
    </xsl:call-template>
   </xsl:for-each>
   <!-- Describe registers bits by functional modules -->
   <xsl:for-each select="$modnames">
    <xsl:variable name="modname" select="@name"/>
    <xsl:if test="count(/avr-tools-device-file/modules/module[@name=$modname]/register-group/register/bitfield)">
     <xsl:call-template name="header2">
      <xsl:with-param name="str" select="concat(@name, ' MODULE REGISTERS BITS DEFINITION')"/>
     </xsl:call-template>
     <xsl:text>;&#10;</xsl:text>
     <xsl:apply-templates select="/avr-tools-device-file/modules/module[@name=$modname]" mode="regbits"/>
    </xsl:if>

   </xsl:for-each>
  </xsl:if>
 </xsl:template>


 <xsl:template name="listextrabitfields">
  <xsl:variable name="bfvlist">
   <xsl:apply-templates select="/avr-tools-device-file/modules/module/register-group/register/bitfield[@values != '']" mode="extrabf"/>
  </xsl:variable>
  <xsl:if test="count(exsl:node-set($bfvlist)/value-group) &gt; 0">
   <xsl:call-template name="header1">
    <xsl:with-param name="str" select="'EXTRA BITFIELDS VALUES'"/>
   </xsl:call-template>
   <xsl:text>;&#10;</xsl:text>
   <xsl:for-each select="exsl:node-set($bfvlist)/value-group[not(@name=preceding::value-group/@name)]">
    <xsl:variable name="width">
     <xsl:call-template name="dec2log2">
      <xsl:with-param name="num" select="count(value) - 1"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:value-of select="concat('; ::::  ', @name, '&#09;:::: values&#10;')" indent="no"/>
    <xsl:apply-templates select="value" mode="extra">
     <xsl:with-param name="digits" select="$width"/>
    </xsl:apply-templates>
   </xsl:for-each>
  </xsl:if>
 </xsl:template>


 <xsl:template match="module" mode="regbits">
  <xsl:for-each select="register-group/register">
   <xsl:variable name="regname" select="@name"/>
   <xsl:if test="count(bitfield) &gt; 0">
    <xsl:call-template name="header3">
     <xsl:with-param name="str" select="concat('Register ', $regname, ' bits')"/>
    </xsl:call-template>
    <xsl:apply-templates select="bitfield" mode="list"/>
    <xsl:for-each select="bitfield[@values != '']">
     <xsl:variable name="bfname">
      <xsl:call-template name="bfname" select="."/>
     </xsl:variable>
     <xsl:variable name="enum" select="@values"/>
     <xsl:variable name="bfmask" select="@mask"/>
     <xsl:variable name="maxsize">
      <xsl:call-template name="enumsize">
       <xsl:with-param name="mask" select="$bfmask"/>
      </xsl:call-template>
     </xsl:variable>
     <xsl:choose>
      <xsl:when test="count(../../../value-group[@name=$enum]/value) &gt; $maxsize">
       <xsl:value-of select="concat('; ::::  ', $bfname, '&#09;&gt;&gt;&gt;&gt; This is a part of ', $enum, ' enum (see complete values list below)&#10;')" indent="no"/>
      </xsl:when>
      <xsl:otherwise>
       <xsl:value-of select="concat('; ::::  ', $bfname, '&#09;:::: bitfield values&#10;')" indent="no"/>
       <xsl:apply-templates select="../../../value-group[@name=$enum]/value">
        <xsl:with-param name="enum" select="$enum"/>
        <xsl:with-param name="mask" select="$bfmask"/>
        <xsl:with-param name="valdiv">
         <xsl:call-template name="groupdiv">
          <xsl:with-param name="nodes" select="../../../value-group[@name=$enum]/value"/>
         </xsl:call-template>
        </xsl:with-param>
       </xsl:apply-templates>
      </xsl:otherwise>
     </xsl:choose>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
   </xsl:if>
  </xsl:for-each>
 </xsl:template>


 <xsl:template name="bfname">
  <xsl:variable name="name" select="@name"/>
  <xsl:variable name="mask" select="@mask"/>
  <xsl:variable name="regname" select="../@name"/>
  <xsl:choose>
   <xsl:when test="string-length(@name) &lt; 2">
    <xsl:value-of select="concat($regname, '_', @name)"/>
   </xsl:when>
   <!--
   <xsl:when test="count(../../../../module/register-group/register[@name!=$regname]/bitfield[@name=$name and @mask!=$mask]) &gt; 0">
    <xsl:value-of select="concat(../../../@name, '_',$regname, '_', @name)"/>
   </xsl:when>
   -->
   <xsl:when test="count(preceding-sibling::bitfield[@name=$name]) &gt; 0">
    <xsl:value-of select="''"/>
   </xsl:when>
   <xsl:when test="count(../bitfield[@name=$name]) &gt; 1">
    <xsl:value-of select="@name"/>
   </xsl:when>
   <xsl:when test="count(../../../../module/register-group/register/bitfield[@name=$name and @mask!=$mask]) &gt; 0">
    <xsl:value-of select="concat($regname, '_', @name)"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:value-of select="@name"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <!-- Protect from multiple definitions of mask chunks -->
 <xsl:template name="bfmask">
  <xsl:param name="nodes"/>
  <xsl:param name="result" select="0"/>
  <xsl:choose>
   <xsl:when test="not($nodes)">
    <xsl:call-template name="num2hex">
     <xsl:with-param name="number" select="$result"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:variable name="value">
     <xsl:call-template name="num2dec">
      <xsl:with-param name="number" select="$nodes[1]/@mask"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:call-template name="bfmask">
     <xsl:with-param name="nodes" select="$nodes[position() != 1]"/>
     <xsl:with-param name="result" select="$result + $value"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template match="bitfield" mode="extrabf">
  <xsl:variable name="enum" select="@values"/>
  <xsl:variable name="maxsize">
   <xsl:call-template name="enumsize">
    <xsl:with-param name="mask" select="@mask"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:if test="count(../../../value-group[@name=$enum]/value) &gt; $maxsize">
   <xsl:copy-of select="../../../value-group[@name=$enum]"/>
  </xsl:if>
 </xsl:template>


 <xsl:template match="bitfield" mode="list">
  <xsl:variable name="name" select="@name"/>
  <xsl:variable name="bfname">
   <xsl:call-template name="bfname" select="."/>
  </xsl:variable>
  <xsl:variable name="bfmask">
   <xsl:call-template name="bfmask">
    <xsl:with-param name="nodes" select="../bitfield[@name=$name]"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:variable name="bits">
    <xsl:call-template name="countone">
     <xsl:with-param name="number" select="$bfmask"/>
    </xsl:call-template>
  </xsl:variable>
  <!-- Check when to comment out or skip definition of the bitfield -->
  <xsl:variable name="mode">
   <xsl:choose>
    <xsl:when test="$bfname = ''">
     <xsl:value-of select="'skip'"/>
    </xsl:when>
    <xsl:when test="$name != $bfname">
     <xsl:value-of select="'equ'"/>
    </xsl:when>
    <xsl:when test="count(preceding::bitfield[@name=$name]) &gt; 0">
     <xsl:value-of select="'nequ'"/>
    </xsl:when>
    <xsl:otherwise>
     <xsl:value-of select="'equ'"/>
    </xsl:otherwise>
   </xsl:choose>
  </xsl:variable>
  <!-- Output -->
  <xsl:choose>
   <!-- Single bit -->
   <xsl:when test="$bits = 1">
    <xsl:apply-templates select="." mode="onebit">
     <xsl:with-param name="mode" select="$mode"/>
     <xsl:with-param name="bfname" select="$bfname"/>
    </xsl:apply-templates>
   </xsl:when>
   <xsl:otherwise>
    <!-- Bitset mask -->
    <xsl:apply-templates select="." mode="bitset">
     <xsl:with-param name="mode" select="$mode"/>
     <xsl:with-param name="bfname" select="$bfname"/>
     <xsl:with-param name="bfmask" select="$bfmask"/>
     <xsl:with-param name="bits" select="$bits"/>
    </xsl:apply-templates>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template match="bitfield" mode="onebit">
  <xsl:param name="mode"/>
  <xsl:param name="bfname"/>
  <xsl:call-template name="out">
   <xsl:with-param name="mode" select="$mode"/>
   <xsl:with-param name="name" select="$bfname"/>
   <xsl:with-param name="namewidth" select="16"/>
   <xsl:with-param name="value">
    <xsl:call-template name="littlebit">
     <xsl:with-param name="number" select="@mask"/>
    </xsl:call-template>
   </xsl:with-param>
   <xsl:with-param name="valuewidth" select="16"/>
   <xsl:with-param name="comment" select="concat(@mask, ' - ', @caption)"/>
  </xsl:call-template>
 </xsl:template>


 <xsl:template match="bitfield" mode="bitset">
  <xsl:param name="mode"/>
  <xsl:param name="bfname"/>
  <xsl:param name="bfmask"/>
  <xsl:param name="bits"/>
  <xsl:variable name="gap">
    <xsl:call-template name="testgap">
     <xsl:with-param name="number" select="$bfmask"/>
    </xsl:call-template>
  </xsl:variable>
  <!-- Mask definiton -->
  <xsl:call-template name="out">
   <xsl:with-param name="mode" select="$mode"/>
   <xsl:with-param name="name" select="concat($bfname, '_MASK')"/>
   <xsl:with-param name="namewidth" select="16"/>
   <xsl:with-param name="value" select="$bfmask"/>
   <xsl:with-param name="valuewidth" select="16"/>
   <xsl:with-param name="comment" select="concat('     - ', @caption, ' (', $bits, ' bits)')"/>
  </xsl:call-template>
  <!-- Lower bit definition -->
  <xsl:if test="$gap = 0 and $mode!='skip'">
   <xsl:variable name="bit0name" select="concat($bfname, '0')"/>
   <!-- Check bit0 name already used -->
   <xsl:variable name="bit0mode">
    <xsl:choose>
     <!-- Same bit0 for another register was defined -->
     <xsl:when test="count(../../../../module/register-group/register/bitfield[@name=$bit0name]) &gt; 0">
      <xsl:value-of select="'nequ'"/>
     </xsl:when>
     <!-- Bit0 matches a register name -->
     <xsl:when test="count(../../../../module/register-group/register[@name=$bit0name]) &gt; 0">
      <xsl:value-of select="'nequ'"/>
     </xsl:when>
     <!-- Accepteable name -->
     <xsl:otherwise>
      <xsl:value-of select="$mode"/>
     </xsl:otherwise>
    </xsl:choose>
   </xsl:variable>
   <xsl:call-template name="out">
    <xsl:with-param name="mode" select="$bit0mode"/>
    <xsl:with-param name="name" select="concat($bfname, '0')"/>
    <xsl:with-param name="namewidth" select="16"/>
    <xsl:with-param name="value">
     <xsl:call-template name="littlebit">
      <xsl:with-param name="number" select="$bfmask"/>
     </xsl:call-template>
    </xsl:with-param>
    <xsl:with-param name="valuewidth" select="16"/>
    <xsl:with-param name="comment" select="concat('         ', $bfname, ' BIT0 position')"/>
   </xsl:call-template>
  </xsl:if>
 </xsl:template>


 <xsl:template match="value">
  <xsl:param name="enum"/>
  <xsl:param name="mask"/>
  <xsl:param name="valdiv" select="1"/>
  <xsl:variable name="value">
   <xsl:call-template name="applymask">
    <xsl:with-param name="value" select="@value"/>
    <xsl:with-param name="mask" select="$mask"/>
    <xsl:with-param name="valdiv" select="$valdiv"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:call-template name="out">
   <xsl:with-param name="mode" select="';'"/>
   <xsl:with-param name="namewidth" select="24"/>
   <xsl:with-param name="value" select="concat('  ', $value)"/>
   <xsl:with-param name="valuewidth" select="16"/>
   <xsl:with-param name="valuebase" select="16"/>
   <xsl:with-param name="comment" select="@caption"/>
  </xsl:call-template>
 </xsl:template>


 <xsl:template match="value" mode="extra">
  <xsl:param name="digits" select="3"/>
  <xsl:call-template name="out">
   <xsl:with-param name="mode" select="';'"/>
   <xsl:with-param name="namewidth" select="24"/>
   <xsl:with-param name="value" select="@value"/>
   <xsl:with-param name="valuebase" select="2"/>
   <xsl:with-param name="valueminlen" select="$digits"/>
   <xsl:with-param name="valuewidth" select="16"/>
   <xsl:with-param name="comment" select="@caption"/>
  </xsl:call-template>
 </xsl:template>


 <xsl:template name="MAPPED_IO_offset">
  <xsl:param name="addrspace"/>
  <xsl:param name="addr"/>
  <xsl:variable name="start" select="/avr-tools-device-file/devices/device/address-spaces/address-space[@name=$addrspace]/memory-segment[@name='MAPPED_IO']/@start"/>
  <xsl:variable name="decstart">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$start"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:variable name="decaddr">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$addr"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:choose>
   <xsl:when test="not($start)">
    <xsl:value-of select="0"/>
   </xsl:when>
   <xsl:when test="$decaddr &lt; $decstart">
    <xsl:value-of select="0"/>
   </xsl:when>
   <xsl:when test="$decaddr - $decstart &lt; 64">
    <xsl:value-of select="$start"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:value-of select="0"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="MAPPED_IO_caption">
  <xsl:param name="addrspace"/>
  <xsl:param name="addr"/>
  <xsl:variable name="decstart">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="/avr-tools-device-file/devices/device/address-spaces/address-space[@name=$addrspace]/memory-segment[@name='MAPPED_IO']/@start"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:variable name="decaddr">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$addr"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:choose>
   <xsl:when test="$decaddr - $decstart &lt; 64">
    <xsl:value-of select="''"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:value-of select="'[MEMORY MAPPED] '"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


</xsl:stylesheet>
