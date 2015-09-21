#!/bin/bash

#gcc "$1.c" -o $1
#con = "$1";
Green='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color
if [ "$1" == "b" ]
	then
	g++ "$2.cpp" -o "builds/$2pp"
	printf "${Green}Build Successfull${NC}\n"
elif [ "$1" == "r" ]; then
	#statements
	./"builds/$2pp"
elif [ "$1" == "br" ]; then
	printf "${Green}Compiling....${NC}\n"
	g++ "$2.cpp" -o "builds/$2pp"
	printf "${Green}Finished Compiling, Started running${NC}\n"
	./"builds/$2pp"
else
	printf "${RED}Invalid Auxilary Command${NC}\n"
fi