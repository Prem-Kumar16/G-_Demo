#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := prime.cpp

BINS := prime

all: prime

prime: prime.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} prime.o -o prime

prime.o: prime.cpp
	@echo "Creating...."
	${CC} -c prime.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf prime.o prime 
