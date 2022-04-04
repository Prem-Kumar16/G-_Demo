#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := check.cpp

BINS := check

all: check

check: check.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} check.o -o check

check.o: check.cpp
	@echo "Creating...."
	${CC} -c check.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf check.o check 
