#! /bin/bash

ROOT=$PWD

rm -rf $ROOT/06_rewrite && mkdir $ROOT/06_rewrite && pushd $ROOT/06_rewrite

mkdir remote.git && pushd remote.git
git init --bare
popd


git clone remote.git clone && pushd clone

git config --local core.editor vim
git commit --allow-empty -m "First commit"
$ROOT/utils/generate.sh file.txt 1 2
$ROOT/utils/generate.sh file.txt 3 4
$ROOT/utils/generate.sh file.txt 5 5
$ROOT/utils/generate.sh file.txt 6 6
git push
$ROOT/utils/log.sh

popd


git clone remote.git other && pushd other

git config --local core.editor vim
$ROOT/utils/log.sh

popd


pushd clone

git rebase -i HEAD~4
$ROOT/utils/log.sh

git push --force
$ROOT/utils/log.sh

popd


pushd other

$ROOT/utils/generate.sh file.txt 7 7

git fetch
$ROOT/utils/log.sh

git pull --rebase
vim file.txt
git add file.txt
git commit
$ROOT/utils/log.sh

git push
$ROOT/utils/log.sh

popd
