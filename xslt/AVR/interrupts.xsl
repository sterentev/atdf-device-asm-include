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


</xsl:stylesheet>
