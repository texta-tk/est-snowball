    gcc -O -o Snowball compiler/*.c
    ./Snowball estonian.sbl -o est/estonian -ep H_ -utf8
    gcc -o EST_prog est/*.c
    ./EST_prog voc.txt -o TEMP-txt
    ##diff output.txt TEMP-txt
