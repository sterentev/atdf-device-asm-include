#!/bin/sh

VERSION=0.01

realpath=`readlink -f $0`

usage() {
    echo "Usage:"
    echo "	$0 [-v] <INC dir>"
    echo ""
    echo "	Check AVR devices support in AVRA compiler."
    echo "Options:"
    echo "	-h	print this message"
    echo "	-v	be vervose, output compiler errors"
    echo ""
}

DEBUG=''
while getopts vh opt; do
    case $opt in
        v) DEBUG="Y" ;;
        *) usage; exit 0 ;;
    esac
done

shift $((OPTIND - 1))
if [ $# -lt 1 ]; then
    usage
    exit 1
fi
INDIR="$1"

TMPLIST=$(mktemp -t testinc)
TMPASM=$(mktemp -t testasm)
RF=0
RS=0
RT=0

trap "rm -f ${TMPLIST} ${TMPASM}; exit 1" 1 2 3 5 10 13 15

find "${INDIR}" -type f -name \*.inc -print > ${TMPLIST}

exec<${TMPLIST}
while read name; do
	echo ".include \"${name}\"" > $TMPASM
	echo "" >> $TMPASM
	echo ".org 0x0000" >> $TMPASM
	echo "" >> $TMPASM
	echo "" >> $TMPASM
	printf "%-32s    - " $name
	if [ "$DEBUG" = "Y" ]; then
		avra -o /dev/null -d /dev/null -e /dev/null -l /dev/null $TMPASM >/dev/null
	else
		avra -o /dev/null -d /dev/null -e /dev/null -l /dev/null $TMPASM >/dev/null 2>&1
	fi
	if [ $? -eq 0 ]; then
		RS=$(($RS + 1))
		echo "SUCCESS"
	else
		RF=$(($RF + 1))
		echo "FAIL"
	fi
	RT=$(($RT + 1))
done

echo "============================================="
echo "Total:		${RT}"
echo "Passed:		${RS}"
echo "Failed:		${RF}"

rm ${TMPLIST} ${TMPASM}
