#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := hello.cpp

BINS := hello

all: hello

hello: hello.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} hello.o -o hello

hello.o: hello.cpp
	@echo "Creating...."
	${CC} -c hello.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf hello.o hello 
