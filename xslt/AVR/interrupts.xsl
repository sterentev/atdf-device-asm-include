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
    <xsl:when test="@name='RESET'">
     <xsl:value-of select="concat('rjmp&#09;', @name, '&#09;&#09;')"/>
    </xsl:when>
    <xsl:when test="@name='INT0' or @name='PCINT0' or @name='EE_READY' or @name='EE_RDY'">
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
  <xsl:text>;#&#09;RESET:&#10;</xsl:text>
  <xsl:call-template name="stackinit">
   <xsl:with-param name="ram" select="/avr-tools-device-file/devices/device/address-spaces/address-space/memory-segment[@type='ram' and (@name='SRAM' or (@name='IRAM' and @external='false'))]"/>
   <xsl:with-param name="regs" select="/avr-tools-device-file/modules/module/register-group[@name='CPU']"/>
  </xsl:call-template>
 </xsl:template>

 <xsl:template name="stackinit">
  <xsl:param name="ram"/>
  <xsl:param name="regs"/>
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


</xsl:stylesheet>
