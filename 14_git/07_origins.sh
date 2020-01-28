#! /bin/bash

ROOT=$PWD

rm -rf $ROOT/07_origins && mkdir $ROOT/07_origins && pushd $ROOT/07_origins

mkdir remote.git && pushd remote.git
git init --bare
$ROOT/utils/log.sh
popd

git clone remote.git clone && pushd clone

git config --local core.editor vim
$ROOT/utils/generate.sh file.txt 1 2
$ROOT/utils/generate.sh file.txt 3 4
$ROOT/utils/generate.sh file.txt 5 5
$ROOT/utils/generate.sh file.txt 6 6
git push
$ROOT/utils/log.sh

popd


git clone --bare remote.git ci.git && pushd ci.git
git push --set-upstream origin master
git remote show origin
$ROOT/utils/log.sh
popd


pushd clone
git remote add ci ../ci.git

$ROOT/utils/generate.sh file.txt 7 7
$ROOT/utils/log.sh

git push ci 
$ROOT/utils/log.sh

git pull
$ROOT/utils/log.sh

popd


pushd ci.git
$ROOT/utils/log.sh
git push
$ROOT/utils/log.sh
popd


pushd clone

git fetch
$ROOT/utils/log.sh

git pull
$ROOT/utils/log.sh

popd

