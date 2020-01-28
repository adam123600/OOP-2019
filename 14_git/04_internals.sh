#! /bin/bash -x

ROOT=$PWD

rm -rf $ROOT/04_internals && mkdir $ROOT/04_internals && pushd $ROOT/04_internals


git init
$ROOT/utils/internals.sh
$ROOT/utils/status.sh

echo "Hello" > file.txt
$ROOT/utils/internals.sh
$ROOT/utils/status.sh

git add file.txt
$ROOT/utils/internals.sh
$ROOT/utils/status.sh

git commit -m "Adding hello"
$ROOT/utils/internals.sh
$ROOT/utils/status.sh

echo "World" > other.txt
git add other.txt
$ROOT/utils/internals.sh
$ROOT/utils/status.sh

git commit -m "Adding world"
$ROOT/utils/internals.sh
$ROOT/utils/status.sh


