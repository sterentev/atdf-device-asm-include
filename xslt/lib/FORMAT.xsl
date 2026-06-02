<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
 <xsl:output method="text" omit-xml-declaration="yes" indent="no"/>
 <xsl:strip-space elements="*"/>
 <xsl:include href='MATH.xsl'/>

 <xsl:param name="tabspace" select="8"/>


 <xsl:template name="printtab">
  <xsl:param name="count"/>
  <xsl:choose>
   <xsl:when test="$count &lt; 1"/>
   <xsl:otherwise>
    <xsl:value-of select="'&#09;'" indent="no"/>
    <xsl:call-template name="printtab">
     <xsl:with-param name="count" select="$count - 1"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>

 <xsl:template name="tabpad">
  <xsl:param name="str"/>
  <xsl:param name="width"/>
  <xsl:value-of select="$str" indent="no"/>
  <xsl:call-template name="printtab">
   <xsl:with-param name="count" select="($width + $tabspace - 1 - string-length($str)) div $tabspace"/>
  </xsl:call-template>
 </xsl:template>

 <xsl:template name="spacepad">
  <xsl:param name="str"/>
  <xsl:param name="width"/>
  <xsl:choose>
   <xsl:when test="string-length($str) &gt;= $width">
    <xsl:value-of select="$str" indent="no"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="spacepad">
     <xsl:with-param name="str" select="concat($str, ' ')"/>
     <xsl:with-param name="width" select="$width"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="header1">
  <xsl:param name="str"/>
  <xsl:text>&#10;&#10;&#10;; **********************************************************************&#10;</xsl:text>
  <xsl:text>; ***************&#09;</xsl:text>
  <xsl:call-template name="tabpad">
   <xsl:with-param name="str" select="$str"/>
   <xsl:with-param name="width" select="24"/>
  </xsl:call-template>
  <xsl:text>************************&#10;</xsl:text>
  <xsl:text>; **********************************************************************&#10;</xsl:text>
 </xsl:template>

 <xsl:template name="header2">
  <xsl:param name="str"/>
  <xsl:text>&#10;&#10;</xsl:text>
  <xsl:text>; ====&#09;</xsl:text>
  <xsl:call-template name="tabpad">
   <xsl:with-param name="str" select="$str"/>
   <xsl:with-param name="width" select="48"/>
  </xsl:call-template>
  <xsl:text>========&#10;</xsl:text>
 </xsl:template>

 <xsl:template name="header3">
  <xsl:param name="str"/>
  <xsl:text>; ----------&#09;</xsl:text>
  <xsl:call-template name="tabpad">
   <xsl:with-param name="str" select="$str"/>
   <xsl:with-param name="width" select="32"/>
  </xsl:call-template>
  <xsl:text>------------------------&#10;</xsl:text>
 </xsl:template>


 <xsl:template name="pragma">
  <xsl:param name="name"/>
  <xsl:param name="value"/>
  <xsl:param name="type" select="'str'"/>
  <xsl:variable name="outvalue">
   <xsl:choose>
    <xsl:when test="$type='hex'">
     <xsl:call-template name="tobase">
      <xsl:with-param name="number" select="$value"/>
      <xsl:with-param name="base" select="16"/>
     </xsl:call-template>
    </xsl:when>
    <xsl:when test="$type='dec'">
     <xsl:call-template name="tobase">
      <xsl:with-param name="number" select="$value"/>
      <xsl:with-param name="base" select="10"/>
     </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
     <xsl:value-of select="$value"/>
    </xsl:otherwise>
   </xsl:choose>
  </xsl:variable>
  <xsl:value-of select="concat('#pragma ', $name, ' ', $outvalue, '&#10;')"/>
 </xsl:template>


 <xsl:template name="out">
  <xsl:param name="mode" select="'equ'"/>
  <xsl:param name="name"/>
  <xsl:param name="namewidth" select="16"/>
  <xsl:param name="value"/>
  <xsl:param name="valuewidth" select="16"/>
  <xsl:param name="valuebase"/>
  <xsl:param name="valueminlen" select="2"/>
  <xsl:param name="comment"/>
  <!-- Calculate -->
  <xsl:variable name="value1">
   <xsl:choose>
    <xsl:when test="$valuebase">
     <xsl:call-template name="evexpr">
      <xsl:with-param name="expression" select="$value"/>
     </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
     <xsl:value-of select="$value"/>
    </xsl:otherwise>
   </xsl:choose>
  </xsl:variable>
  <!-- Convert base -->
  <xsl:variable name="outvalue">
   <xsl:choose>
    <xsl:when test="$valuebase">
     <xsl:call-template name="tobase">
      <xsl:with-param name="number" select="$value1"/>
      <xsl:with-param name="base" select="$valuebase"/>
      <xsl:with-param name="minlen" select="$valueminlen"/>
     </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
     <xsl:value-of select="$value1"/>
    </xsl:otherwise>
   </xsl:choose>
  </xsl:variable>
  <!-- Build line -->
  <xsl:choose>
   <!--   -->
   <xsl:when test="$mode = 'skip'"/>
   <!-- .equ -->
   <xsl:when test="$mode = 'equ'">
    <xsl:value-of select="'.equ&#09;'" indent="no"/>
    <xsl:call-template name="tabpad">
     <xsl:with-param name="str" select="$name"/>
     <xsl:with-param name="width" select="$namewidth"/>
    </xsl:call-template>
    <xsl:call-template name="addcomment">
     <xsl:with-param name="value" select="concat('= ', $outvalue)"/>
     <xsl:with-param name="valuewidth" select="$valuewidth"/>
     <xsl:with-param name="comment" select="$comment"/>
    </xsl:call-template>
   </xsl:when>
   <!-- ;.equ -->
   <xsl:when test="$mode = 'nequ'">
    <xsl:value-of select="';.equ&#09;'" indent="no"/>
    <xsl:call-template name="tabpad">
     <xsl:with-param name="str" select="$name"/>
     <xsl:with-param name="width" select="$namewidth"/>
    </xsl:call-template>
    <xsl:call-template name="addcomment">
     <xsl:with-param name="value" select="concat('= ', $outvalue)"/>
     <xsl:with-param name="valuewidth" select="$valuewidth"/>
     <xsl:with-param name="comment" select="$comment"/>
    </xsl:call-template>
   </xsl:when>
   <!-- ; col1 col2 -->
   <xsl:when test="$mode = 'col'">
    <xsl:value-of select="';&#09;'" indent="no"/>
    <xsl:call-template name="tabpad">
     <xsl:with-param name="str" select="$name"/>
     <xsl:with-param name="width" select="$namewidth"/>
    </xsl:call-template>
    <xsl:call-template name="addcomment">
     <xsl:with-param name="value" select="$outvalue"/>
     <xsl:with-param name="valuewidth" select="$valuewidth"/>
     <xsl:with-param name="comment" select="$comment"/>
    </xsl:call-template>
   </xsl:when>
   <!-- ; -->
   <xsl:otherwise>
    <xsl:call-template name="tabpad">
     <xsl:with-param name="str" select="';'"/>
     <xsl:with-param name="width" select="$namewidth"/>
    </xsl:call-template>
    <xsl:call-template name="addcomment">
     <xsl:with-param name="value" select="$outvalue"/>
     <xsl:with-param name="valuewidth" select="$valuewidth"/>
     <xsl:with-param name="comment" select="$comment"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>

 <xsl:template name="addcomment">
  <xsl:param name="value"/>
  <xsl:param name="valuewidth"/>
  <xsl:param name="comment"/>
  <xsl:choose>
   <xsl:when test="not($comment)">
    <xsl:value-of select="concat($value, '&#10;')"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="tabpad">
     <xsl:with-param name="str" select="$value"/>
     <xsl:with-param name="width" select="$valuewidth"/>
    </xsl:call-template>
    <xsl:value-of select="concat('; ', $comment, '&#10;')" indent="no"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="evexpr">
  <xsl:param name="expression"/>
  <xsl:param name="base"/>
  <xsl:variable name="expression" select="translate($expression, ' ', '')"/>
  <xsl:choose>
   <xsl:when test="not(string-length(translate($expression, '0123456789xabcdefABCDEF', '')))">
    <xsl:value-of select="$expression"/>
   </xsl:when>
   <xsl:when test="not(string-length(translate($expression, '-+0123456789xabcdefABCDEF', '')))">
    <xsl:call-template name="evalpm">
     <xsl:with-param name="expression" select="$expression"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:value-of select="$expression"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="tobase">
  <xsl:param name="number"/>
  <xsl:param name="base"/>
  <xsl:param name="minlen"/>
  <xsl:choose>
   <xsl:when test="not($base)">
    <xsl:value-of select="$number"/>
   </xsl:when>
   <xsl:when test="$base = 10">
    <xsl:call-template name="num2dec">
     <xsl:with-param name="number" select="$number"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:when test="$base = 2">
    <xsl:call-template name="num2bin">
     <xsl:with-param name="number" select="$number"/>
     <xsl:with-param name="minlen" select="$minlen"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="num2hex">
     <xsl:with-param name="number" select="$number"/>
     <xsl:with-param name="minlen" select="$minlen"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


</xsl:stylesheet>
