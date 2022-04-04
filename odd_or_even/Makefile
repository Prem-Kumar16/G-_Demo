#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := odd_or_even.cpp

BINS := odd_or_even

all: odd_or_even

odd_or_even: odd_or_even.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} odd_or_even.o -o odd_or_even

odd_or_even.o: odd_or_even.cpp
	@echo "Creating...."
	${CC} -c odd_or_even.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf odd_or_even.o odd_or_even 
