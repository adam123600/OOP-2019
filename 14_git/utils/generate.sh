#! /bin/bash

FILE=$1
START=$2
STOP=$3

for ((i=$START;i<=$STOP;i++))
do
    echo "Line $i" >> $FILE
done

git add $FILE
git commit -m "Adding lines from $START to $STOP into $FILE"
