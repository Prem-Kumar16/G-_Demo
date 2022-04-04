#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := LCM.cpp

BINS := LCM

all: LCM

LCM: LCM.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} LCM.o -o LCM

LCM.o: LCM.cpp
	@echo "Creating...."
	${CC} -c LCM.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf LCM.o LCM 
