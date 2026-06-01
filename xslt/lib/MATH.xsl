<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
 <xsl:output method="text" omit-xml-declaration="yes" indent="no"/>
 <xsl:strip-space elements="*"/>

 <xsl:template name="littlebit">
  <xsl:param name="number"/>
  <xsl:variable name="dec">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$number"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:choose>
   <xsl:when test="$dec = 0">
    <xsl:value-of select="'NaN'"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="rar2">
     <xsl:with-param name="number" select="$dec"/>
     <xsl:with-param name="result" select="0"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="rar2">
  <xsl:param name="number"/>
  <xsl:param name="result"/>
  <xsl:choose>
   <xsl:when test="$number mod 2">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="rar2">
     <xsl:with-param name="number" select="$number div 2"/>
     <xsl:with-param name="result" select="$result + 1"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="countone">
  <xsl:param name="number"/>
  <xsl:variable name="dec">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$number"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:call-template name="cnt1">
   <xsl:with-param name="number" select="$dec"/>
  </xsl:call-template>
 </xsl:template>


 <xsl:template name="cnt1">
  <xsl:param name="number"/>
  <xsl:param name="result" select="0"/>
  <xsl:choose>
   <xsl:when test="$number = 0">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="cnt1">
     <xsl:with-param name="number" select="floor($number div 2)"/>
     <xsl:with-param name="result" select="$result + ($number mod 2)"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="pow2">
  <xsl:param name="power"/>
  <xsl:param name="result" select="1"/>
  <xsl:choose>
   <xsl:when test="$power = 0">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="pow2">
     <xsl:with-param name="power" select="$power - 1"/>
     <xsl:with-param name="result" select="$result * 2"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>



 <xsl:template name="testgap">
  <xsl:param name="number"/>
  <xsl:variable name="dec">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$number"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:call-template name="gap1">
   <xsl:with-param name="number" select="$dec"/>
   <xsl:with-param name="prev" select="0"/>
   <xsl:with-param name="result" select="-1"/>
  </xsl:call-template>
 </xsl:template>

 <xsl:template name="gap1">
  <xsl:param name="number"/>
  <xsl:param name="prev"/>
  <xsl:param name="result"/>
  <xsl:choose>
   <xsl:when test="$number = 0">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:when test="$prev = 1">
    <xsl:call-template name="gap1">
     <xsl:with-param name="number" select="floor($number div 2)"/>
     <xsl:with-param name="prev" select="($number mod 2)"/>
     <xsl:with-param name="result" select="$result"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="gap1">
     <xsl:with-param name="number" select="floor($number div 2)"/>
     <xsl:with-param name="prev" select="($number mod 2)"/>
     <xsl:with-param name="result" select="$result + ($number mod 2)"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="bit2mask">
  <xsl:param name="bit"/>
  <xsl:call-template name="dec2hex">
   <xsl:with-param name="number">
    <xsl:call-template name="ral2">
     <xsl:with-param name="number" select="$bit"/>
    </xsl:call-template>
   </xsl:with-param>
  </xsl:call-template>
 </xsl:template>

 <xsl:template name="ral2">
  <xsl:param name="number"/>
  <xsl:param name="result" select="1"/>
  <xsl:choose>
   <xsl:when test="$number = 0">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="ral2">
     <xsl:with-param name="number" select="$number - 1"/>
     <xsl:with-param name="result" select="$result * 2"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="num2dec">
  <xsl:param name="number"/>
  <xsl:choose>
   <xsl:when test="not(string-length($number))">
    <xsl:value-of select="0"/>
   </xsl:when>
   <xsl:when test="starts-with($number, '0x')">
    <xsl:call-template name="hex2dec">
     <xsl:with-param name="number" select="substring($number, 3)"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:value-of select="$number"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>

 <xsl:template name="hex2dec">
  <xsl:param name="number"/>
  <xsl:param name="result" select="0"/>
  <xsl:variable name="len" select="string-length($number)"/>
  <xsl:choose>
   <xsl:when test="not($len)">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:variable name="digit" select="substring($number, 0, 2)"/>
    <xsl:variable name="digit10">
     <xsl:call-template name="hex">
      <xsl:with-param name="digit" select="$digit"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:call-template name="hex2dec">
     <xsl:with-param name="number" select="substring($number, 2)"/>
     <xsl:with-param name="result" select="$result * 16 + $digit10"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>

 <xsl:template name="hex">
  <xsl:param name="digit"/>
  <xsl:choose>
   <xsl:when test="$digit = 'f' or $digit = 'F'">15</xsl:when>
   <xsl:when test="$digit = 'e' or $digit = 'E'">14</xsl:when>
   <xsl:when test="$digit = 'd' or $digit = 'D'">13</xsl:when>
   <xsl:when test="$digit = 'c' or $digit = 'C'">12</xsl:when>
   <xsl:when test="$digit = 'b' or $digit = 'B'">11</xsl:when>
   <xsl:when test="$digit = 'a' or $digit = 'A'">10</xsl:when>
   <xsl:otherwise><xsl:value-of select="$digit"/></xsl:otherwise>
  </xsl:choose>
 </xsl:template>

 <xsl:template name="hexdigit">
  <xsl:param name="digit"/>
  <xsl:choose>
   <xsl:when test="$digit = 15">F</xsl:when>
   <xsl:when test="$digit = 14">E</xsl:when>
   <xsl:when test="$digit = 13">D</xsl:when>
   <xsl:when test="$digit = 12">C</xsl:when>
   <xsl:when test="$digit = 11">B</xsl:when>
   <xsl:when test="$digit = 10">A</xsl:when>
   <xsl:otherwise><xsl:value-of select="$digit"/></xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="num2hex">
  <xsl:param name="number"/>
  <xsl:param name="minlen" select="2"/>
  <xsl:choose>
   <xsl:when test="not(string-length($number))">
    <xsl:value-of select="'NaN'"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:variable name="dec">
     <xsl:call-template name="num2dec">
      <xsl:with-param name="number" select="$number"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:variable name="hex">
     <xsl:call-template name="dec2hex">
      <xsl:with-param name="number" select="$dec"/>
     </xsl:call-template>
    </xsl:variable>
    <!-- Add prefix and leading zeros -->
    <xsl:value-of select="'0x'"/>
    <xsl:call-template name="logscale">
     <xsl:with-param name="str" select="$hex"/>
     <xsl:with-param name="minlen" select="$minlen"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>

 <xsl:template name="dec2hex">
  <xsl:param name="number"/>
  <xsl:param name="result" select="''"/>
  <xsl:choose>
   <xsl:when test="$number != 0">
    <xsl:variable name="digit">
     <xsl:call-template name="hexdigit">
      <xsl:with-param name="digit" select="$number mod 16"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:call-template name="dec2hex">
     <xsl:with-param name="number" select="floor($number div 16)"/>
     <xsl:with-param name="result" select="concat($digit, $result)"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:value-of select="$result"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="num2bin">
  <xsl:param name="number"/>
  <xsl:param name="minlen" select="4"/>
  <xsl:param name="mode" select="'fixlen'"/>
  <xsl:choose>
   <xsl:when test="not(string-length($number))">
    <xsl:value-of select="'NaN'"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:variable name="dec">
     <xsl:call-template name="num2dec">
      <xsl:with-param name="number" select="$number"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:variable name="bin">
     <xsl:call-template name="dec2bin">
      <xsl:with-param name="number" select="$dec"/>
     </xsl:call-template>
    </xsl:variable>
    <!-- Add prefix and leading zeros -->
    <xsl:value-of select="'0b'"/>
    <xsl:choose>
     <xsl:when test="$mode = 'fixlen'">
      <xsl:call-template name="fixscale">
       <xsl:with-param name="num" select="$bin"/>
       <xsl:with-param name="minlen" select="$minlen"/>
      </xsl:call-template>
     </xsl:when>
     <xsl:otherwise>
      <xsl:call-template name="logscale">
       <xsl:with-param name="str" select="$bin"/>
       <xsl:with-param name="minlen" select="$minlen"/>
      </xsl:call-template>
     </xsl:otherwise>
    </xsl:choose>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>

 <xsl:template name="dec2bin">
  <xsl:param name="number"/>
  <xsl:param name="result" select="''"/>
  <xsl:choose>
   <xsl:when test="$number != 0">
    <xsl:call-template name="dec2bin">
     <xsl:with-param name="number" select="floor($number div 2)"/>
     <xsl:with-param name="result" select="concat($number mod 2, $result)"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:value-of select="$result"/>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="dec2log2">
  <xsl:param name="num"/>
  <xsl:param name="result" select="0"/>
  <xsl:choose>
   <xsl:when test="$num = 0">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="dec2log2">
     <xsl:with-param name="num" select="floor($num div 2)"/>
     <xsl:with-param name="result" select="$result + 1"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="logscale">
  <xsl:param name="str"/>
  <xsl:param name="minlen"/>
  <xsl:variable name="len" select="string-length($str)"/>
  <xsl:variable name="scale">
   <xsl:call-template name="cnt1">
    <xsl:with-param name="number" select="$len"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:choose>
   <xsl:when test="($scale = 1) and ($len &gt;= $minlen)">
    <xsl:value-of select="$str"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="logscale">
     <xsl:with-param name="str" select="concat('0', $str)"/>
     <xsl:with-param name="minlen" select="$minlen"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>

 <xsl:template name="fixscale">
  <xsl:param name="num"/>
  <xsl:param name="minlen"/>
  <xsl:variable name="len" select="string-length($num)"/>
  <xsl:choose>
   <xsl:when test="$len &gt;= $minlen">
    <xsl:value-of select="$num"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="fixscale">
     <xsl:with-param name="num" select="concat('0', $num)"/>
     <xsl:with-param name="minlen" select="$minlen"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="evalpm">
  <xsl:param name="expression"/>
  <xsl:param name="a" select="'0'"/>
  <xsl:choose>
   <xsl:when test="not(string-length($expression))">
    <xsl:value-of select="$a"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:variable name="xterm">
      <xsl:call-template name="getterm">
       <xsl:with-param name="expression" select="$expression"/>
      </xsl:call-template>
    </xsl:variable>
    <xsl:variable name="restexp" select="substring-after($expression, $xterm)"/>
    <xsl:choose>
     <xsl:when test="starts-with($xterm, '-')">
      <xsl:variable name="term">
       <xsl:call-template name="num2dec">
        <xsl:with-param name="number" select="substring-after($xterm, '-')"/>
       </xsl:call-template>
      </xsl:variable>
      <xsl:call-template name="evalpm">
       <xsl:with-param name="expression" select="$restexp"/>
       <xsl:with-param name="a" select="$a - $term"/>
      </xsl:call-template>
     </xsl:when>
     <xsl:when test="starts-with($xterm, '+')">
      <xsl:variable name="term">
       <xsl:call-template name="num2dec">
        <xsl:with-param name="number" select="substring-after($xterm, '+')"/>
       </xsl:call-template>
      </xsl:variable>
      <xsl:call-template name="evalpm">
       <xsl:with-param name="expression" select="$restexp"/>
       <xsl:with-param name="a" select="$a + $term"/>
      </xsl:call-template>
     </xsl:when>
     <xsl:otherwise>
      <xsl:variable name="term">
       <xsl:call-template name="num2dec">
        <xsl:with-param name="number" select="$xterm"/>
       </xsl:call-template>
      </xsl:variable>
      <xsl:call-template name="evalpm">
       <xsl:with-param name="expression" select="$restexp"/>
       <xsl:with-param name="a" select="$a + $term"/>
      </xsl:call-template>
     </xsl:otherwise>
    </xsl:choose>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="getterm">
  <xsl:param name="expression"/>
  <xsl:param name="term" select="''"/>
  <xsl:choose>
   <xsl:when test="not(string-length($expression))">
    <xsl:value-of select="$term"/>
   </xsl:when>
   <xsl:when test="not(string-length($term))">
    <xsl:call-template name="getterm">
     <xsl:with-param name="expression" select="substring($expression, 2)"/>
     <xsl:with-param name="term" select="substring($expression, 0, 2)"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:choose>
     <xsl:when test="starts-with($expression, '+')">
      <xsl:value-of select="$term"/>
     </xsl:when>
     <xsl:when test="starts-with($expression, '-')">
      <xsl:value-of select="$term"/>
     </xsl:when>
     <xsl:otherwise>
      <xsl:call-template name="getterm">
       <xsl:with-param name="expression" select="substring($expression, 2)"/>
       <xsl:with-param name="term" select="concat($term, substring($expression, 0, 2))"/>
      </xsl:call-template>
     </xsl:otherwise>
    </xsl:choose>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="enumsize">
  <xsl:param name="mask"/>
  <xsl:variable name="decmask">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$mask"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:call-template name="cntenum">
   <xsl:with-param name="number" select="$decmask"/>
  </xsl:call-template>
 </xsl:template>

 <xsl:template name="cntenum">
  <xsl:param name="number"/>
  <xsl:param name="result" select="1"/>
  <xsl:choose>
   <xsl:when test="$number = 0">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:call-template name="cntenum">
     <xsl:with-param name="number" select="floor($number div 2)"/>
     <xsl:with-param name="result" select="$result + $result * ($number mod 2)"/>
    </xsl:call-template>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="applymask">
  <xsl:param name="value"/>
  <xsl:param name="mask"/>
  <xsl:param name="valdiv" select="1"/>
  <xsl:variable name="decvalue">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$value"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:variable name="decmask">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$mask"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:call-template name="remask">
   <xsl:with-param name="value" select="$decvalue div $valdiv"/>
   <xsl:with-param name="mask" select="$decmask"/>
  </xsl:call-template>
 </xsl:template>


 <xsl:template name="remask">
  <xsl:param name="value"/>
  <xsl:param name="mask"/>
  <xsl:param name="scale" select="1"/>
  <xsl:param name="result" select="0"/>
  <xsl:choose>
   <xsl:when test="$mask = 0">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:choose>
     <xsl:when test="$mask mod 2">
      <xsl:call-template name="remask">
       <xsl:with-param name="value" select="floor($value div 2)"/>
       <xsl:with-param name="mask" select="floor($mask div 2)"/>
       <xsl:with-param name="scale" select="$scale * 2"/>
       <xsl:with-param name="result" select="$result + ($value mod 2) * $scale"/>
      </xsl:call-template>
     </xsl:when>
     <xsl:otherwise>
      <xsl:call-template name="remask">
       <xsl:with-param name="value" select="$value"/>
       <xsl:with-param name="mask" select="floor($mask div 2)"/>
       <xsl:with-param name="scale" select="$scale * 2"/>
       <xsl:with-param name="result" select="$result"/>
      </xsl:call-template>
     </xsl:otherwise>
    </xsl:choose>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <xsl:template name="andmask">
  <xsl:param name="value"/>
  <xsl:param name="mask"/>
  <xsl:variable name="decvalue">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$value"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:variable name="decmask">
   <xsl:call-template name="num2dec">
    <xsl:with-param name="number" select="$mask"/>
   </xsl:call-template>
  </xsl:variable>
  <xsl:call-template name="andmask10">
   <xsl:with-param name="value" select="$decvalue"/>
   <xsl:with-param name="mask" select="$decmask"/>
  </xsl:call-template>
 </xsl:template>

 <xsl:template name="andmask10">
  <xsl:param name="value"/>
  <xsl:param name="mask"/>
  <xsl:param name="scale" select="1"/>
  <xsl:param name="result" select="0"/>
  <xsl:choose>
   <xsl:when test="$mask = 0">
    <xsl:value-of select="$result"/>
   </xsl:when>
   <xsl:otherwise>
    <xsl:choose>
     <xsl:when test="$mask mod 2">
      <xsl:call-template name="andmask10">
       <xsl:with-param name="value" select="floor($value div 2)"/>
       <xsl:with-param name="mask" select="floor($mask div 2)"/>
       <xsl:with-param name="scale" select="$scale * 2"/>
       <xsl:with-param name="result" select="$result + ($value mod 2) * $scale"/>
      </xsl:call-template>
     </xsl:when>
     <xsl:otherwise>
      <xsl:call-template name="andmask10">
       <xsl:with-param name="value" select="floor($value div 2)"/>
       <xsl:with-param name="mask" select="floor($mask div 2)"/>
       <xsl:with-param name="scale" select="$scale * 2"/>
       <xsl:with-param name="result" select="$result"/>
      </xsl:call-template>
     </xsl:otherwise>
    </xsl:choose>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>


 <!-- Get divider to normalize enum values set -->
 <xsl:template name="groupdiv">
  <xsl:param name="nodes"/>
  <xsl:param name="mb" select="32"/>
  <xsl:choose>
   <xsl:when test="not($nodes)">
    <xsl:call-template name="pow2">
     <xsl:with-param name="power" select="$mb"/>
    </xsl:call-template>
   </xsl:when>
   <xsl:otherwise>
    <xsl:variable name="lb">
     <xsl:call-template name="littlebit">
      <xsl:with-param name="number" select="$nodes[1]/@value"/>
     </xsl:call-template>
    </xsl:variable>
    <xsl:choose>
     <xsl:when test="$lb = 'NaN' or $lb &gt;= $mb">
      <xsl:call-template name="groupdiv">
       <xsl:with-param name="nodes" select="$nodes[position() != 1]"/>
       <xsl:with-param name="mb" select="$mb"/>
      </xsl:call-template>
     </xsl:when>
     <xsl:otherwise>
      <xsl:call-template name="groupdiv">
       <xsl:with-param name="nodes" select="$nodes[position() != 1]"/>
       <xsl:with-param name="mb" select="$lb"/>
      </xsl:call-template>
     </xsl:otherwise>
    </xsl:choose>
   </xsl:otherwise>
  </xsl:choose>
 </xsl:template>

</xsl:stylesheet>
