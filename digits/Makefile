#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := digits.cpp

BINS := digits

all: digits

digits: digits.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} digits.o -o digits

digits.o: digits.cpp
	@echo "Creating...."
	${CC} -c digits.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf digits.o digits 
