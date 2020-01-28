#! /bin/bash -x

ROOT=$PWD

rm -rf $ROOT/03_push && mkdir $ROOT/03_push && pushd $ROOT/03_push

mkdir demo.git && pushd demo.git
git init --bare
popd

git clone demo.git A && pushd A
git config --local core.editor vim
$ROOT/utils/log.sh

$ROOT/utils/generate.sh file.txt 1 2
$ROOT/utils/log.sh

git push
$ROOT/utils/log.sh

popd


git clone demo.git B && pushd B
git config --local core.editor vim
$ROOT/utils/log.sh

$ROOT/utils/generate.sh file.txt 3 4
$ROOT/utils/log.sh


popd && pushd A
$ROOT/utils/log.sh

$ROOT/utils/generate.sh file.txt 5 6
$ROOT/utils/log.sh

git push
$ROOT/utils/log.sh



popd && pushd B
$ROOT/utils/log.sh

git fetch
$ROOT/utils/log.sh

git pull
$ROOT/utils/log.sh

vim file.txt
git add file.txt
git commit

$ROOT/utils/status.sh
$ROOT/utils/log.sh

git push
$ROOT/utils/log.sh



popd && pushd A
$ROOT/utils/log.sh

git fetch
$ROOT/utils/log.sh

git pull
$ROOT/utils/log.sh

