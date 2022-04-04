#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := QandR.cpp

BINS := QandR

all: QandR

QandR: QandR.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} QandR.o -o QandR

QandR.o: QandR.cpp
	@echo "Creating...."
	${CC} -c QandR.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf QandR.o QandR 
