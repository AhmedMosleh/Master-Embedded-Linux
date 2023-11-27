#!/bin/bash

# value="${HOME}/scripts\n${HOME}/c++\n${HOME}/ah"

# select=$(echo -e "$value" | fzf);

# nautilus "$select" &

#echo "hello word"

#read -a  myname 
#echo "${myname[1]}"

# mycmd=$(ls ../..)

# echo "$mycmd"

#=======================================
#=============if & test=================
#=======================================

# if [ 1 -eq 2 ]; then
# espeak "yes yes yes"
# elif [ 2 -eq 2 ]; then 
# espeak -s 100 "two is equal to two"
# else 
# espeak -s 100 "no no no no no"
# fi

# test "ahmed" = "ali" && echo "true" || echo "this is false"

# read -p "inter value" x
# -z STRING
#         the length of STRING is zero
# test -z "$x" && echo "empty" || echo "string has a value $x"

#   -f FILE
#   FILE exists and is a regular file
# test -f "./.main.cppp.swp" && echo "file exist" || echo "file doesn't exist"

# if [ -f "./a.out" ]; then
#     echo "file exist"
# else 
#     echo "file doesn't exist"
# fi 

# if [ 1 -eq 1 -a 4 -gt 3 ]; then 
#     echo "rule 1"
# fi

# if [ 1 -eq 1 ] && [ 5 -gt 4 ]; then 
#     echo "rule 2"
# fi

# if [[ 1 -eq 1 && 5 -gt 4 ]]; then 
#     echo "rule 3"
# fi 

# if ((001 == 1)); then 
#     echo "rule 4"
# fi 

# x=0

# if ((++x)); then 
#     echo "rule 5"
# fi

# x=5
# y=6
# if [ $x == $y ]
# then 
#     echo "true"
# else 
#     echo "false"
# fi
# echo 

# $1 ==> first argumment 
# if [ $1 -gt 50 ]; then 
#     echo "the number is greater than 50"
#     if (( $1 % 2 == 0)); then 
#         echo "the number is evern"
#     fi
# fi 

#=======================================
#=============if & test=================
#=======================================

# for i in 1 2 3 4 5 6; do 
#     echo -n $i
#     echo -n " "
# done 
# echo 

# for j in {1..10}; do 
#     echo -n $j
#     echo -n " "
# done 
# echo 

# learn="start learning from Java script"
# for word in $learn; do
#     echo -n $word
#     echo -n " "
# done
# echo 


# usefle
# x=$(ls)
# for i in $x; do
#     echo "the file name is ${i}"
# done 

# files=$(ls test)
# for i in ${files}; do
#     echo "the content of file ${i} is: "
#     cat "./test/${i}"
#     echo
# done 

# x=0
# y=3
# while [[ $x -le 5 && $y -ge 0 ]]; do 
#     echo "x = $x"
#     echo "y = $y"
#     ((x++))
#     ((y--))
# done

i=1
until [ $i -gt 10 ]; do 
    echo $i
    ((i++))
done 









