<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
 <xsl:output method="text" omit-xml-declaration="yes" indent="no"/>
 <xsl:strip-space elements="*"/>
 <xsl:include href='../lib/FORMAT.xsl'/>

 <xsl:template match="avr-tools-device-file">
  <xsl:if test="count(devices/device/interrupts/interrupt)">
   <xsl:call-template name="header1">
    <xsl:with-param name="str" select="'INTERRUPT VECTORS'"/>
   </xsl:call-template>
   <xsl:text>;&#10;</xsl:text>
   <xsl:apply-templates select="devices/device/interrupts"/>
  </xsl:if>
 </xsl:template>


 <xsl:template match="interrupts">
  <xsl:variable name="N" select="count(interrupt)"/>
  <xsl:call-template name="out">
   <xsl:with-param name="name" select="'INT_VECTORS_NUM'"/>
   <xsl:with-param name="namewidth" select="24"/>
   <xsl:with-param name="value" select="$N"/>
   <xsl:with-param name="valuebase" select="10"/>
  </xsl:call-template>
  <xsl:call-template name="out">
   <xsl:with-param name="name" select="'INT_VECTORS_SIZE'"/>
   <xsl:with-param name="namewidth" select="24"/>
   <xsl:with-param name="value" select="$N + $N"/>
   <xsl:with-param name="valuebase" select="16"/>
  </xsl:call-template>
  <xsl:text>;&#10;</xsl:text>
  <xsl:call-template name="header3">
   <xsl:with-param name="str" select="'INTERRUPT INDEXES'"/>
  </xsl:call-template>
  <xsl:text>;&#10;</xsl:text>
  <xsl:apply-templates select="interrupt"/>
  <xsl:call-template name="header2">
   <xsl:with-param name="str" select="'ASM PROGRAM SKELETON'"/>
  </xsl:call-template>
  <xsl:text>;&#10;</xsl:text>
  <xsl:text>;  Copy-paste following definitions into your code,&#10;</xsl:text>
  <xsl:text>;  uncomment and modify for your needs&#10;</xsl:text>
  <xsl:text>;&#10;</xsl:text>
  <xsl:call-template name="header3">
   <xsl:with-param name="str" select="' &gt;&gt;&gt;   SKELETON BEGIN   &lt;&lt;&lt;'"/>
  </xsl:call-template>
  <xsl:call-template name="skeleton"/>
  <xsl:call-template name="header3">
   <xsl:with-param name="str" select="' &gt;&gt;&gt;   SKELETON  END    &lt;&lt;&lt;'"/>
  </xsl:call-template>
  <xsl:text>&#10;</xsl:text>
 </xsl:template>


 <xsl:template match="interrupt">
  <xsl:call-template name="out">
   <xsl:with-param name="mode" select="'col'"/>
   <xsl:with-param name="name" select="@index"/>
   <xsl:with-param name="namewidth" select="8"/>
   <xsl:with-param name="value" select="@name"/>
   <xsl:with-param name="valuewidth" select="16"/>
   <xsl:with-param name="comment" select="@caption"/>
  </xsl:call-template>
 </xsl:template>


 <xsl:template name="skeleton">
  <xsl:text>;#&#09;.org 0x0000&#10;</xsl:text>
  <xsl:text>;#&#09;; Interrupt vectors begin&#10;</xsl:text>
  <xsl:for-each select="interrupt">
   <xsl:sort select="@index" data-type="number" order="ascending"/>
   <xsl:text>;#&#09;&#09;</xsl:text>
   <xsl:choose>
    <xsl:when test="@name='RESET' or @name='INT0' or @name='PCINT0' or @name='EE_READY' or @name='EE_RDY'">
     <xsl:value-of select="concat('rjmp&#09;INT_', @name, '&#09;')"/>
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
  <xsl:text>;#&#09;INT_RESET:&#10;</xsl:text>
 </xsl:template>


</xsl:stylesheet>
