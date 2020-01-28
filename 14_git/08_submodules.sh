#! /bin/bash -x

ROOT=$PWD

rm -rf $ROOT/08_submodules && mkdir $ROOT/08_submodules && pushd $ROOT/08_submodules

git init --bare project.git
git init --bare submoduleA.git
git init --bare submoduleB.git

git clone submoduleA.git submoduleA_clone && pushd submoduleA_clone
$ROOT/utils/generate.sh a.txt 1 1
git push
$ROOT/utils/log.sh
popd

git clone submoduleB.git submoduleB_clone && pushd submoduleB_clone
$ROOT/utils/generate.sh b.txt 2 2
git push
$ROOT/utils/log.sh
popd

git clone project.git project_clone && pushd project_clone

$ROOT/utils/generate.sh file.txt 3 4
git push
$ROOT/utils/log.sh

git submodule add ../submoduleA.git
git submodule add ../submoduleB.git
$ROOT/utils/status.sh

git commit -m "Adding submodules"
git push
$ROOT/utils/log.sh

popd


git clone --recursive project.git project_clone_recursive && pushd project_clone_recursive
$ROOT/utils/log.sh
tree
popd


pushd submoduleA_clone
$ROOT/utils/generate.sh a.txt 2 2
git push
$ROOT/utils/log.sh
popd

pushd submoduleB_clone
$ROOT/utils/generate.sh b.txt 3 3
git push
$ROOT/utils/log.sh
popd


pushd project_clone_recursive
$ROOT/utils/status.sh
$ROOT/utils/log.sh

git fetch

$ROOT/utils/status.sh
$ROOT/utils/log.sh

pushd submoduleA
$ROOT/utils/log.sh
git fetch
$ROOT/utils/log.sh
popd

pushd submoduleB
git fetch
$ROOT/utils/log.sh
popd

$ROOT/utils/status.sh

pushd submoduleA
git checkout master
git pull
$ROOT/utils/log.sh
popd

pushd submoduleB
git checkout master
git pull
$ROOT/utils/log.sh
popd

$ROOT/utils/status.sh
git diff

git add .
git commit -m "Update submodule"
git push

$ROOT/utils/log.sh

popd
