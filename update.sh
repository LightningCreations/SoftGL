#!/bin/bash
shopt -s extglob
git rm -r --cached .
git add !(3DEngineCpp|*.so|*.so.*)
git add .g*
git submodule add ./3DEngineCpp
git commit
git pull
git push
