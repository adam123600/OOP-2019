#! /bin/bash

ROOT=$PWD

rm -rf $ROOT/05_revert && mkdir $ROOT/05_revert && pushd $ROOT/05_revert

mkdir demo.git && pushd demo.git
git init --bare
popd

git clone demo.git clone && pushd clone
git config --local core.editor vim

$ROOT/utils/generate.sh file.txt 1 2
$ROOT/utils/generate.sh file.txt 3 4
git push
$ROOT/utils/generate.sh file.txt 5 6

$ROOT/utils/log.sh

popd


git clone demo.git ci && pushd ci
git config --local core.editor vim
$ROOT/utils/log.sh

git revert HEAD
$ROOT/utils/log.sh

git push


popd && pushd clone

git fetch
$ROOT/utils/log.sh

git pull
$ROOT/utils/status.sh

vim file.txt
git add file.txt
git commit
$ROOT/utils/log.sh

git push
$ROOT/utils/log.sh

popd
