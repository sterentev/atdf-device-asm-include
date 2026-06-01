<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
 <xsl:output method="text" omit-xml-declaration="yes" indent="no"/>
 <xsl:strip-space elements="*"/>

 <xsl:template match="avr-tools-device-file">
  <xsl:text>;***********************************************************************&#10;</xsl:text>
  <xsl:text>;********************* NOTES *******************************************&#10;</xsl:text>
  <xsl:text>;***********************************************************************&#10;</xsl:text>
  <xsl:text>;&#10;</xsl:text>
  <xsl:text>; - Registers marked [MEMORY MAPPED] are extended I/O ports&#10;</xsl:text>
  <xsl:text>;   and cannot be used with IN/OUT instructions&#10;</xsl:text>
  <xsl:text>; - Register bits are specified by a bit number (for a single bit)&#10;</xsl:text>
  <xsl:text>;   xor by mask (for bits group). In case bits in a group are placed sequentially&#10;</xsl:text>
  <xsl:text>;   to each other (no gaps) a number for the lower bit in the group is defined also.&#10;</xsl:text>
  <xsl:text>; - When a set of bitmask values is listed for bits group,&#10;</xsl:text>
  <xsl:text>;   use those values without bit shifting operation&#10;</xsl:text>
  <xsl:text>; - Some bitmasks MCU developers split on 2+ chunks and placed separately&#10;</xsl:text>
  <xsl:text>;   (sometime in different registers). Such bitmaps are placed in&#10;</xsl:text>
  <xsl:text>;   'EXTRA BITFIELDS VALUES' section. Refer to docs where such bits should be set.&#10;</xsl:text>
  <xsl:text>; - FUSES and LOCKBITS in program skeleton are set to their production default values.&#10;</xsl:text>
  <xsl:text>;&#10;</xsl:text>
  <xsl:text>;***********************************************************************&#10;</xsl:text>
  <xsl:text>&#10;</xsl:text>
 </xsl:template>

</xsl:stylesheet>

