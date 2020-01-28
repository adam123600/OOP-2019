#! /bin/bash

git init
git config --local core.editor vim

echo "#README" > readme.md
git add readme.md
git commit -m "Initial commit"
