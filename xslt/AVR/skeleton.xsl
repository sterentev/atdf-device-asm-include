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

 <xsl:template name="asmfuses">
 </xsl:template>

 <xsl:template name="asminterrupts">
  <xsl:text>;#&#09;.org 0x0000&#10;</xsl:text>
  <xsl:text>;#&#09;; Interrupt vectors begin&#10;</xsl:text>
  <xsl:for-each select="devices/device/interrupts/interrupt">
   <xsl:sort select="@index" data-type="number" order="ascending"/>
   <xsl:value-of select="concat($indent, '&#09;')"/>
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


</xsl:stylesheet>
