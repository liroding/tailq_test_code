#!/bin/sh
arg1=$1
arg2=$2
echo "--------------start git ${arg1}-----------------"
if [ "$arg1" = "push" ]; then
    git add .
    git status
    git commit -s -m arg2
    git push
fi




