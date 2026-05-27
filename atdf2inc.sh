#!/bin/sh

VERSION=0.06

realpath=`readlink -f $0`
xsltdir=`dirname $realpath`/xslt

usage() {
    echo "Usage:"
    echo "	$0 [-o outfile.inc] infile.xml"
    echo ""
    echo "	Script converts XML specification of AVR MCU"
    echo "	into .inc file appropriate for macroassembler."
    echo "	If output file not specified results will be written to STDOUT."
    echo "	XML files for AVR MCUs are available at the following URL"
    echo "	http://packs.download.atmel.com/"
    echo ""
}

# Default values
OUTFILE="-"

while getopts o:h opt; do
    case $opt in
        o) OUTFILE=${OPTARG} ;;
        *) usage; exit 0 ;;
    esac
done

shift $((OPTIND - 1))

if [ $# -lt 1 ]; then
    usage
    exit 1
fi

INFILE=$1
INFILENAME=`basename "$INFILE"`
# For file header!
OUTFILENAME=`echo "$INFILENAME" | sed -e 's/.\///g' -e 's/\.atdf$//g'`.inc
# For ifndef
INCL=_`echo "$INFILENAME" | tr '[:lower:]' '[:upper:]' | sed -e 's/.\///g' -e 's/\.ATDF$//g'`_INC_


DEVICE=`xsltproc $xsltdir/MCU.xsl ${INFILE}`
ARCH=`xsltproc $xsltdir/ARCH.xsl ${INFILE}`
TABWIDTH=`xsltproc $xsltdir/TAB.xsl ${INFILE}`
ARCHDIR='AVR'

case $ARCH in
	AVR)	;;
	AVR8)	;;
	AVR8L)	;;
	*)
		echo "Unknown architecture '${ARCH}'" >&2
		exit 1
		;;
esac

if [ $OUTFILE = "-" ]; then
	exec 3>&1
else
	exec 3> $OUTFILE
fi

exec 1>&3

echo ";***********************************************************************"
echo ";***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************"
echo ";*************** Script version: ${VERSION} **********************************"
echo ";*************** tab-width ${TABWIDTH} *******************************************"
echo ";***********************************************************************"
echo ";"
echo ";* Target MCU        : ${DEVICE}"
echo ";* Title             : Register/Mask/Bit Definitions for the ${DEVICE}"
echo ";* File Name         : ${OUTFILENAME}"
echo ";* Source Date       : `TZ= stat -f %Sm -t '%Y-%m-%d %H:%M:%S' \"${INFILE}\"` UTC"
echo ";* Make Date         : `TZ= date +'%Y-%m-%d %H:%M:%S'` UTC"
echo ";"
echo ";***********************************************************************"
echo ""
echo "#ifndef ${INCL}"
echo "#define ${INCL}"
echo ""


xsltproc $xsltdir/${ARCHDIR}/notes.xsl "$INFILE"

xsltproc $xsltdir/${ARCHDIR}/device.xsl "$INFILE"

xsltproc $xsltdir/${ARCHDIR}/registers.xsl "$INFILE"

xsltproc $xsltdir/${ARCHDIR}/interrupts.xsl "$INFILE"


echo "#endif /* ${INCL} */"
cat <<\DOC_FOOTER

; ************************ END OF FILE *********************************

DOC_FOOTER

exec 3>&-
