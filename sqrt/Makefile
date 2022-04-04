#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := sqrt.cpp

BINS := sqrt

all: sqrt

sqrt: sqrt.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} sqrt.o -o sqrt

sqrt.o: sqrt.cpp
	@echo "Creating...."
	${CC} -c sqrt.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf sqrt.o sqrt 
