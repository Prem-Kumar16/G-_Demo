#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := avg.cpp

BINS := avg

all: avg

avg: avg.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} avg.o -o avg

avg.o: avg.cpp
	@echo "Creating...."
	${CC} -c avg.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf avg.o avg 
