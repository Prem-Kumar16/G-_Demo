#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := swap.cpp

BINS := swap

all: swap

swap: swap.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} swap.o -o swap

swap.o: swap.cpp
	@echo "Creating...."
	${CC} -c swap.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf swap.o swap 
