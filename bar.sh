#!/bin/bash

#gcc "$1.c" -o $1
#con = "$1";
Green='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color
if [ "$1" == "b" ]
	then
	gcc "$2.c" -o $2
	printf "${Green}Build Successfull${NC}\n"
elif [ "$1" == "r" ]; then
	#statements
	./$2
elif [ "$1" == "br" ]; then
	gcc "$2.c" -o $2
	./$2
else
	printf "${RED}Invalid Auxilary Command${NC}\n"
fi