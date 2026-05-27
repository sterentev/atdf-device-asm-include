#!/bin/sh

VERSION=0.03

realpath=`readlink -f $0`
converter=`dirname $realpath`/atdf2inc.sh

usage() {
    echo "Usage:"
    echo "	$0 <ATDF dir> <INC dir>"
    echo ""
    echo "	Script provides mass conversion of XML specifications of AVR MCUs"
    echo "	stored in .atdf files which are a part of Microchip \"device packs\"."
    echo "	It makes macroassembler .inc files and puts them into <INC dir>"
    echo "	(keeping original name but with .inc extension)."
    echo "	If <INC dir> is absent it will be created."
    echo "	Device pack files which contain source .atdf files for AVR MCUs"
    echo "	are available at the following URL: http://packs.download.atmel.com/"
    echo ""
}

if [ $# -lt 2 ]; then
    usage
    exit 1
fi

INDIR="$1"
OUTDIR="$2"

mkdir -p "$OUTDIR"

TMPFILE=$(mktemp -t atdf2inc)
trap "rm -f ${TMPFILE}; exit 1" 1 2 3 5 10 13 15

find "${INDIR}" -type f -name \*.atdf -print | sed -e 's/.atdf$//g' -e 's#.*/##g' > ${TMPFILE}

exec<${TMPFILE}
while read name; do
	echo "Process ${name}"
	INFILE="${INDIR}/${name}.atdf"
	OUTFILE="${OUTDIR}/${name}.inc"
	$converter -o "${OUTFILE}" "$INFILE"
done

rm ${TMPFILE}
