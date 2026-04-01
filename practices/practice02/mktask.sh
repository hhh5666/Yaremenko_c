#!/bin/bash

N=$1

mkdir "task$1"

echo "#include<stdio.h>" >> "task$1/task.c"
echo "" >> "task$1/task.c"
echo "int main()" >> "task$1/task.c"
echo "{" >> "task$1/task.c"
echo "" >> "task$1/task.c"
echo "" >> "task$1/task.c"
echo "	return 0;" >> "task$1/task.c"
echo "}" >> "task$1/task.c"

cd "task$1"
vim "task.c"
