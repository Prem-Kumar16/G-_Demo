#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := sum.cpp

BINS := sum

all: sum

sum: sum.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} sum.o -o sum

sum.o: sum.cpp
	@echo "Creating...."
	${CC} -c sum.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf sum.o sum 
