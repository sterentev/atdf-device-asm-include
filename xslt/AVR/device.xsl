<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
 <xsl:output method="text" omit-xml-declaration="yes" indent="no"/>
 <xsl:strip-space elements="*"/>
 <xsl:include href='../lib/FORMAT.xsl'/>

 <xsl:template match="avr-tools-device-file">
  <xsl:variable name="device" select="devices/device/@name" />
  <xsl:call-template name="header1">
   <xsl:with-param name="str" select="'DEVICE DEFINITIONS'"/>
  </xsl:call-template>
  <xsl:text>;&#10;</xsl:text>
  <xsl:value-of select="concat('.device&#09;', $device, '&#10;')" indent="no"/>
  <xsl:apply-templates select="devices/device/property-groups/property-group[@name='SIGNATURES']/property" />
  <xsl:text>&#10;</xsl:text>
  <xsl:text>&#10;; ************* CPU REGISTERS DEFINITIONS ******************************&#10;</xsl:text>
  <xsl:text>;&#10;</xsl:text>
  <xsl:text>.def&#09;XH&#09;= r27&#10;</xsl:text>
  <xsl:text>.def&#09;XL&#09;= r26&#10;</xsl:text>
  <xsl:text>.def&#09;YH&#09;= r29&#10;</xsl:text>
  <xsl:text>.def&#09;YL&#09;= r28&#10;</xsl:text>
  <xsl:text>.def&#09;ZH&#09;= r31&#10;</xsl:text>
  <xsl:text>.def&#09;ZL&#09;= r30&#10;</xsl:text>

  <xsl:call-template name="header1">
   <xsl:with-param name="str" select="'ADDR SPACES AND MAPPING'"/>
  </xsl:call-template>
  <xsl:text>;&#10;</xsl:text>
  <xsl:apply-templates select="devices/device/address-spaces"/>
 </xsl:template>


 <xsl:template match="property">
   <xsl:call-template name="out">
    <xsl:with-param name="name" select="@name"/>
    <xsl:with-param name="value" select="@value"/>
   </xsl:call-template>
 </xsl:template>


 <xsl:template match="address-space">
  <xsl:if test="count(memory-segment)">
   <xsl:call-template name="header3">
    <xsl:with-param name="str" select="concat(translate(@name, 'abcdefghijklmnopqrstuvwxyz' , 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'), ' ADDRESS SPACE')"/>
   </xsl:call-template>
   <xsl:apply-templates select="memory-segment"/>
   <xsl:text>&#10;</xsl:text>
  </xsl:if>
 </xsl:template>

 <xsl:template match="memory-segment">
  <xsl:value-of select="concat(';   ', @name, '&#10;')" indent="no"/>
  <xsl:call-template name="out">
   <xsl:with-param name="name" select="concat('ADDR_', @name, '_START')"/>
   <xsl:with-param name="namewidth" select="32"/>
   <xsl:with-param name="value" select="@start"/>
   <xsl:with-param name="valuebase" select="16"/>
   <xsl:with-param name="valueminlen" select="4"/>
  </xsl:call-template>
  <xsl:call-template name="out">
   <xsl:with-param name="name" select="concat('ADDR_', @name, '_END')"/>
   <xsl:with-param name="namewidth" select="32"/>
   <xsl:with-param name="value" select="concat(@start, '+', @size, ' - ', '1')"/>
   <xsl:with-param name="valuebase" select="16"/>
   <xsl:with-param name="valueminlen" select="4"/>
  </xsl:call-template>
  <xsl:call-template name="out">
   <xsl:with-param name="name" select="concat('ADDR_', @name, '_SIZE')"/>
   <xsl:with-param name="namewidth" select="32"/>
   <xsl:with-param name="value" select="@size"/>
   <xsl:with-param name="valuebase" select="16"/>
   <xsl:with-param name="valueminlen" select="4"/>
  </xsl:call-template>
 </xsl:template>


</xsl:stylesheet>
