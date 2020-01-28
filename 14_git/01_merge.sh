#! /bin/bash -x

ROOT=$PWD

rm -rf $ROOT/01_merge && mkdir $ROOT/01_merge && pushd $ROOT/01_merge

$ROOT/utils/init.sh

$ROOT/utils/generate.sh file.txt 1 2

git branch new_branch

$ROOT/utils/generate.sh file.txt 3 4

git checkout new_branch

$ROOT/utils/generate.sh file.txt 5 6

git checkout master

$ROOT/utils/log.sh

git merge new_branch
$ROOT/utils/status.sh

vim file.txt
$ROOT/utils/status.sh

git add file.txt
$ROOT/utils/status.sh

git commit

$ROOT/utils/log.sh

git branch B1
git branch B2
git branch B3
git branch B4

git checkout B1
$ROOT/utils/generate.sh file.txt 7 7 

git checkout B2
$ROOT/utils/generate.sh file.txt 8 8

git checkout B3
$ROOT/utils/generate.sh file.txt 9 9 

git checkout B4
$ROOT/utils/generate.sh file.txt 10 10 

git checkout master
$ROOT/utils/log.sh

git merge B1 --no-ff
$ROOT/utils/log.sh

git merge B2
vim file.txt
git add file.txt
git commit
$ROOT/utils/log.sh

git merge B3
vim file.txt
git add file.txt
git commit
$ROOT/utils/log.sh

git merge B4
vim file.txt
git add file.txt
git commit
$ROOT/utils/log.sh


git branch -d B1
git branch -d B2
git branch -d B3
git branch -d B4
$ROOT/utils/log.sh

