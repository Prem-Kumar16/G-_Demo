#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := calculator.cpp

BINS := calculator

all: calculator

calculator: calculator.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} calculator.o -o calculator

calculator.o: calculator.cpp
	@echo "Creating...."
	${CC} -c calculator.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf calculator.o calculator 
