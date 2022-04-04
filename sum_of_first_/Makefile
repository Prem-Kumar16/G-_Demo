#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := sumOfFirstAndLast.cpp

BINS := sumOfFirstAndLast

all: sumOfFirstAndLast

sumOfFirstAndLast: sumOfFirstAndLast.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} sumOfFirstAndLast.o -o sumOfFirstAndLast

sumOfFirstAndLast.o: sumOfFirstAndLast.cpp
	@echo "Creating...."
	${CC} -c sumOfFirstAndLast.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf sumOfFirstAndLast.o sumOfFirstAndLast 
