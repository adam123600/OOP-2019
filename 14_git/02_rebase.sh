#! /bin/bash -x

ROOT=$PWD

rm -rf $ROOT/02_rebase && mkdir $ROOT/02_rebase && pushd $ROOT/02_rebase

$ROOT/utils/init.sh

$ROOT/utils/generate.sh file.txt 1 2
$ROOT/utils/generate.sh file.txt 3 4

git branch new_branch

$ROOT/utils/generate.sh file.txt 5 6
$ROOT/utils/generate.sh file.txt 7 8

git checkout new_branch

$ROOT/utils/generate.sh file.txt 9 10
$ROOT/utils/generate.sh file.txt 11 12

$ROOT/utils/log.sh

git rebase master
$ROOT/utils/status.sh

vim file.txt
$ROOT/utils/status.sh

git add file.txt
$ROOT/utils/status.sh

git rebase --continue

$ROOT/utils/log.sh

git checkout master

$ROOT/utils/log.sh

git merge new_branch

$ROOT/utils/log.sh

git branch -d new_branch

$ROOT/utils/log.sh

git branch B1
git branch B2
git branch B3
git branch B4

git checkout B1
$ROOT/utils/generate.sh file.txt 13 13 

git checkout B2
$ROOT/utils/generate.sh file.txt 14 14

git checkout B3
$ROOT/utils/generate.sh file.txt 15 15

git checkout B4
$ROOT/utils/generate.sh file.txt 16 16 

git checkout master
$ROOT/utils/log.sh


git checkout B1
git rebase master
$ROOT/utils/log.sh

git checkout master
git merge B1
$ROOT/utils/log.sh


git checkout B2
git rebase master
vim file.txt
git add file.txt
git rebase --continue
$ROOT/utils/log.sh

git checkout master
git merge B2
$ROOT/utils/log.sh


git checkout B3
git rebase master
vim file.txt
git add file.txt
git rebase --continue
$ROOT/utils/log.sh

git checkout master
git merge B3
$ROOT/utils/log.sh


git checkout B4
git rebase master
vim file.txt
git add file.txt
git rebase --continue
$ROOT/utils/log.sh

git checkout master
git merge B4
$ROOT/utils/log.sh

git branch -d B1
git branch -d B2
git branch -d B3
git branch -d B4
$ROOT/utils/log.sh
