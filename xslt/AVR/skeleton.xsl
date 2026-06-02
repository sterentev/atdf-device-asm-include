<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
 <xsl:output method="text" omit-xml-declaration="yes" indent="no"/>
 <xsl:strip-space elements="*"/>
 <xsl:include href='../lib/FORMAT.xsl'/>

 <xsl:param name="indent">
  <xsl:text>;#&#09;</xsl:text>
 </xsl:param>

 <xsl:param name="lf">
  <xsl:text>;#&#09;&#10;</xsl:text>
 </xsl:param>

 <xsl:template match="avr-tools-device-file">
  <xsl:call-template name="header1">
   <xsl:with-param name="str" select="'ASM PROGRAM SKELETON'"/>
  </xsl:call-template>
  <xsl:text>;&#10;</xsl:text>
  <xsl:text>;  Copy-paste following definitions into your code,&#10;</xsl:text>
  <xsl:text>;  uncomment and modify for your needs&#10;</xsl:text>
  <xsl:text>;&#10;</xsl:text>
  <xsl:call-template name="header3">
   <xsl:with-param name="str" select="' &gt;&gt;&gt;   SKELETON BEGIN   &lt;&lt;&lt;'"/>
  </xsl:call-template>
  <xsl:call-template name="asminclude"/>
  <xsl:value-of select="$lf" indent="no"/>
  <xsl:call-template name="asmfuses"/>
  <xsl:value-of select="$lf" indent="no"/>
  <xsl:call-template name="asminterrupts"/>
  <xsl:call-template name="asminit"/>
  <xsl:call-template name="header3">
   <xsl:with-param name="str" select="' &gt;&gt;&gt;   SKELETON  END    &lt;&lt;&lt;'"/>
  </xsl:call-template>
  <xsl:text>&#10;</xsl:text>
 </xsl:template>


 <xsl:template name="asminclude">
  <xsl:value-of select="concat($indent, '.include &#34;', devices/device/@name, '.inc&#34;&#10;')" indent="no"/>
 </xsl:template>

 <xsl:template name="asminterrupts">
  <xsl:text>;#&#09;.org 0x0000&#10;</xsl:text>
  <xsl:text>;#&#09;; Interrupt vectors begin&#10;</xsl:text>
  <xsl:for-each select="devices/device/interrupts/interrupt">
   <xsl:sort select="@index" data-type="number" order="ascending"/>
   <xsl:value-of select="concat($indent, '&#09;')"/>
   <xsl:choose>
    <xsl:when test="@name='RESET' or @name='INT0' or @name='PCINT0' or @name='EE_READY' or @name='EE_RDY'">
     <xsl:value-of select="concat('rjmp&#09;', @name, '_ISR','&#09;')"/>
    </xsl:when>
    <xsl:otherwise>
     <xsl:text>reti&#09;&#09;&#09;</xsl:text>
    </xsl:otherwise>
   </xsl:choose>
   <xsl:call-template name="tabpad">
    <xsl:with-param name="str" select="concat('; ', @name)"/>
    <xsl:with-param name="width" select="16"/>
   </xsl:call-template>
   <xsl:value-of select="concat(' - ', @caption, '&#10;')"/>
  </xsl:for-each>
  <xsl:text>;#&#09;; Interrupt vectors end&#10;</xsl:text>
  <xsl:text>;#&#09;;.org INT_VECTORS_SIZE&#10;</xsl:text>
  <xsl:text>;#&#09;RESET_ISR:&#10;</xsl:text>
 </xsl:template>

 <xsl:template name="asminit">
  <xsl:variable name="ram" select="devices/device/address-spaces/address-space/memory-segment[@type='ram' and (@name='SRAM' or (@name='IRAM' and @external='false'))]"/>
  <xsl:variable name="regs" select="modules/module/register-group[@name='CPU']"/>
  <xsl:if test="count($ram) and count($regs)">
   <xsl:variable name="topram" select="concat('ADDR_', $ram/@name, '_END')"/>
   <xsl:text>;#&#09;&#09;cli&#10;</xsl:text>
   <xsl:choose>
    <xsl:when test="$regs/register[@name='SP' and @size=1]">
     <xsl:value-of select="concat(';#&#09;&#09;ldi&#09;r16, low(', $topram, ')&#10;')"/>
     <xsl:text>;#&#09;&#09;out&#09;SP, r16&#10;</xsl:text>
    </xsl:when>
    <xsl:when test="$regs/register[@name='SP' and @size=2]">
     <xsl:value-of select="concat(';#&#09;&#09;ldi&#09;r16, high(', $topram, ')&#10;')"/>
     <xsl:text>;#&#09;&#09;out&#09;SP+1, r16&#10;</xsl:text>
     <xsl:value-of select="concat(';#&#09;&#09;ldi&#09;r16, low(', $topram, ')&#10;')"/>
     <xsl:text>;#&#09;&#09;out&#09;SP, r16&#10;</xsl:text>
    </xsl:when>
    <xsl:when test="$regs/register[@name='SPL'] and $regs/register[@name='SPH']">
     <xsl:value-of select="concat(';#&#09;&#09;ldi&#09;r16, high(', $topram, ')&#10;')"/>
     <xsl:text>;#&#09;&#09;out&#09;SPH, r16&#10;</xsl:text>
     <xsl:value-of select="concat(';#&#09;&#09;ldi&#09;r16, low(', $topram, ')&#10;')"/>
     <xsl:text>;#&#09;&#09;out&#09;SPL, r16&#10;</xsl:text>
    </xsl:when>
    <xsl:when test="$regs/register[@name='SPL' and @size=1]">
     <xsl:value-of select="concat(';#&#09;&#09;ldi&#09;r16, low(', $topram, ')&#10;')"/>
     <xsl:text>;#&#09;&#09;out&#09;SPL, r16&#10;</xsl:text>
    </xsl:when>
    <xsl:when test="$regs/register[@name='SPL' and @size=2]">
     <xsl:value-of select="concat(';#&#09;&#09;ldi&#09;r16, high(', $topram, ')&#10;')"/>
     <xsl:text>;#&#09;&#09;out&#09;SPL+1, r16&#10;</xsl:text>
     <xsl:value-of select="concat(';#&#09;&#09;ldi&#09;r16, low(', $topram, ')&#10;')"/>
     <xsl:text>;#&#09;&#09;out&#09;SPL, r16&#10;</xsl:text>
    </xsl:when>
   </xsl:choose>
  </xsl:if>
 </xsl:template>


 <xsl:template name="asmfuses">
  <!-- FUSES calculator -->
  <xsl:for-each select="modules/module[@name='FUSE']/register-group/register">
   <xsl:value-of select="concat($indent, '; FUSES ', @name, ' byte (addr ', @offset, ')&#10;')"/>
   <xsl:apply-templates select="bitfield" mode="enumselect">
    <xsl:with-param name="initval" select="@initval"/>
   </xsl:apply-templates>
   <xsl:value-of select="concat($indent, '.set&#09;FUSES_', @name, '&#09;= 0xFF')"/>
   <xsl:apply-templates select="bitfield" mode="appendexpr">
    <xsl:with-param name="initval" select="@initval"/>
   </xsl:apply-templates>
   <xsl:text>&#10;</xsl:text>
  </xsl:for-each>
  <!-- LOCKBITS calculator -->
  <xsl:for-each select="modules/module[@name='LOCKBIT']/register-group/register">
   <xsl:value-of select="concat($indent, '; LOCKBITS ', @name, ' byte (addr ', @offset, ')&#10;')"/>
   <xsl:apply-templates select="bitfield" mode="enumselect">
    <xsl:with-param name="initval" select="@initval"/>
   </xsl:apply-templates>
   <xsl:value-of select="concat($indent, '.set&#09;LOCKBITS_', @name, '= 0xFF')"/>
   <xsl:apply-templates select="bitfield" mode="appendexpr">
    <xsl:with-param name="initval" select="@initval"/>
   </xsl:apply-templates>
   <xsl:text>&#10;</xsl:text>
  </xsl:for-each>
  <!-- Display calculator results during assembling -->
  <xsl:value-of select="concat($indent, '.message &#34;====================&#34;&#10;')"/>
  <xsl:value-of select="concat($indent, '.message &#34;-----  Fuses  ------&#34;&#10;')"/>
  <xsl:for-each select="modules/module[@name='FUSE']/register-group/register">
   <xsl:value-of select="concat($indent, '.message &#34;')"/>
   <xsl:call-template name="spacepad">
    <xsl:with-param name="str" select="@name"/>
    <xsl:with-param name="width" select="16"/>
   </xsl:call-template>
   <xsl:value-of select="concat('&#34;, FUSES_', @name,'&#10;')"/>
  </xsl:for-each>
  <xsl:value-of select="concat($indent, '.message &#34;----- Lockbits -----&#34;&#10;')"/>
  <xsl:for-each select="modules/module[@name='LOCKBIT']/register-group/register">
   <xsl:value-of select="concat($indent, '.message &#34;')"/>
   <xsl:call-template name="spacepad">
    <xsl:with-param name="str" select="@name"/>
    <xsl:with-param name="width" select="16"/>
   </xsl:call-template>
   <xsl:value-of select="concat('&#34;, LOCKBITS_', @name,'&#10;')"/>
  </xsl:for-each>
  <xsl:value-of select="concat($indent, '.message &#34;====================&#34;&#10;')"/>
 </xsl:template>


 <xsl:template match="bitfield" mode="enumselect">
  <xsl:param name="initval"/>
  <xsl:variable name="bits">
    <xsl:call-template name="countone">
     <xsl:with-param name="number" select="@mask"/>
    </xsl:call-template>
  </xsl:variable>
  <xsl:if test="$bits &gt; 1">
   <xsl:variable name="enum" select="@values"/>
   <xsl:variable name="bfmask" select="@mask"/>
   <xsl:variable name="searchval">
    <xsl:call-template name="applymask">
     <xsl:with-param name="value" select="$initval"/>
     <xsl:with-param name="mask" select="@mask"/>
    </xsl:call-template>
   </xsl:variable>
   <xsl:variable name="foundvalselected">
    <xsl:apply-templates select="../../../value-group[@name=$enum]/value" mode="selected">
     <xsl:with-param name="search" select="$searchval"/>
     <xsl:with-param name="mask" select="$bfmask"/>
     <xsl:with-param name="valdiv">
      <xsl:call-template name="groupdiv">
       <xsl:with-param name="nodes" select="../../../value-group[@name=$enum]/value"/>
      </xsl:call-template>
     </xsl:with-param>
    </xsl:apply-templates>
   </xsl:variable>
   <xsl:variable name="foundvallabeled">
    <xsl:apply-templates select="../../../value-group[@name=$enum]/value" mode="labeled">
     <xsl:with-param name="mask" select="$bfmask"/>
     <xsl:with-param name="valdiv">
      <xsl:call-template name="groupdiv">
       <xsl:with-param name="nodes" select="../../../value-group[@name=$enum]/value"/>
      </xsl:call-template>
     </xsl:with-param>
    </xsl:apply-templates>
   </xsl:variable>
   <!-- Construct .set -->
   <xsl:value-of select="concat($indent, '.set&#09;')"/>
   <xsl:call-template name="tabpad">
    <xsl:with-param name="str" select="@name"/>
    <xsl:with-param name="width" select="16"/>
   </xsl:call-template>
   <xsl:value-of select="'= '"/>
   <xsl:choose>
    <xsl:when test="$foundvallabeled != ''">
     <xsl:value-of select="$foundvallabeled"/>
    </xsl:when>
    <xsl:when test="$foundvalselected != ''">
     <xsl:value-of select="$foundvalselected"/>
    </xsl:when>
    <xsl:otherwise>
     <xsl:call-template name="num2hex">
      <xsl:with-param name="number" select="$searchval"/>
     </xsl:call-template>
    </xsl:otherwise>
   </xsl:choose>
   <xsl:text>&#10;</xsl:text>
  </xsl:if>
 </xsl:template>


 <xsl:template match="bitfield" mode="appendexpr">
  <xsl:param name="initval"/>
  <xsl:variable name="bits">
    <xsl:call-template name="countone">
     <xsl:with-param name="number" select="@mask"/>
    </xsl:call-template>
  </xsl:variable>
  <xsl:variable name="fieldval">
   <xsl:call-template name="andmask">
    <xsl:with-param name="value" select="$initval"/>
    <xsl:with-param name="mask" select="@mask"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:choose>
   <xsl:when test="$bits = 1">
    <xsl:variable name="bitval">
     <xsl:choose>
      <xsl:when test="$fieldval = 0">
       <xsl:value-of select="1"/>
      </xsl:when>
      <xsl:otherwise>
       <xsl:value-of select="0"/>
      </xsl:otherwise>
     </xsl:choose>
    </xsl:variable>
    <xsl:value-of select="concat(' \&#10;;#&#09;&#09;&#09;&#09;  &amp; ~(', $bitval, ' &lt;&lt;', @name, ')')"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:value-of select="concat(' \&#10;;#&#09;&#09;&#09;&#09;  &amp;  (~', @name, '_MASK | ', @name, ')')"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template match="value" mode="selected">
  <xsl:param name="search"/>
  <xsl:param name="mask"/>
  <xsl:param name="valdiv" select="1"/>
  <xsl:variable name="value">
   <xsl:call-template name="applymask">
    <xsl:with-param name="value" select="@value"/>
    <xsl:with-param name="mask" select="$mask"/>
    <xsl:with-param name="valdiv" select="$valdiv"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:if test="$value = $search">
   <xsl:call-template name="num2hex">
    <xsl:with-param name="number" select="$search"/>
   </xsl:call-template>
   <xsl:value-of select="concat('&#09;; ', @caption)"/>
  </xsl:if>
 </xsl:template>

 <xsl:template match="value" mode="labeled">
  <xsl:param name="mask"/>
  <xsl:param name="valdiv" select="1"/>
  <xsl:if test="substring(@name, string-length(@name) - string-length('_DEFAULT') +1) = '_DEFAULT'">
   <xsl:call-template name="num2hex">
    <xsl:with-param name="number">
     <xsl:call-template name="applymask">
      <xsl:with-param name="value" select="@value"/>
      <xsl:with-param name="mask" select="$mask"/>
      <xsl:with-param name="valdiv" select="$valdiv"/>
     </xsl:call-template>
    </xsl:with-param>
   </xsl:call-template>
   <xsl:value-of select="concat('&#09;; ', @caption)"/>
  </xsl:if>
 </xsl:template>


</xsl:stylesheet>
