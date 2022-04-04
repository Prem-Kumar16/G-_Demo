#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := palindrome.cpp

BINS := palindrome

all: palindrome

palindrome: palindrome.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} palindrome.o -o palindrome

palindrome.o: palindrome.cpp
	@echo "Creating...."
	${CC} -c palindrome.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf palindrome.o palindrome 
