<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:ns="some:ns">
 <xsl:output method="text" omit-xml-declaration="yes" indent="no"/>
 <xsl:strip-space elements="*"/>

 <xsl:template match="avr-tools-device-file">
  <xsl:value-of select="devices/device/@architecture" indent="no"/>
 </xsl:template>

</xsl:stylesheet>
