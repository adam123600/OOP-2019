#! /bin/bash

for file in $(find .git/objects/ -type f)
do
    echo "[START] "$file
    perl -MCompress::Zlib -e 'undef $/; print uncompress(<>)'  $file
    echo "[STOP] "$file
done

read -p "Press enter to continue"
