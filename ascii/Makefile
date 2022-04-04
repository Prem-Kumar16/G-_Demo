#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := ascii.cpp

BINS := ascii

all: ascii

ascii: ascii.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} ascii.o -o ascii

ascii.o: ascii.cpp
	@echo "Creating...."
	${CC} -c ascii.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf ascii.o ascii 
