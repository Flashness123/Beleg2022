#!/bin/bash
Green='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color
echo -e ${RED}Compiling...
g++ beleglistmain.cpp Bluray.cpp Buch.cpp person.cpp medium.cpp
echo -e ${Green}Executing...${NC}
./a.out