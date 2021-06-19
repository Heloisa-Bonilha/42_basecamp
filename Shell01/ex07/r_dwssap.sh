#!/bin/sh
cat /etc/passwd | awk -F ":" '{print $1,$2,$3,$4,$6,$7}' | sed -n -e  "2~2p" | awk '{print $1}' | rev | sort -r | sed -n -e "$FT_LINE1, $FT_LINE2 p" | sed -e ':a;$!N;s/\n/, /;ta;' -e "s/$/./" | tr -d "\n"
