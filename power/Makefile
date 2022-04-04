#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := power.cpp

BINS := power

all: power

power: power.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} power.o -o power

power.o: power.cpp
	@echo "Creating...."
	${CC} -c power.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf power.o power 
