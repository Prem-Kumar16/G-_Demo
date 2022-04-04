#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := factorial.cpp

BINS := factorial

all: factorial

factorial: factorial.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} factorial.o -o factorial

factorial.o: factorial.cpp
	@echo "Creating...."
	${CC} -c factorial.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf factorial.o factorial 
