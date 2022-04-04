#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := fibonacci.cpp

BINS := fibonacci

all: fibonacci

fibonacci: fibonacci.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} fibonacci.o -o fibonacci

fibonacci.o: fibonacci.cpp
	@echo "Creating...."
	${CC} -c fibonacci.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf fibonacci.o fibonacci 
