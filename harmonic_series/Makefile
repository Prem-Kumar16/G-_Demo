#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := harmonic.cpp

BINS := harmonic

all: harmonic

harmonic: harmonic.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} harmonic.o -o harmonic

harmonic.o: harmonic.cpp
	@echo "Creating...."
	${CC} -c harmonic.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf harmonic.o harmonic 
