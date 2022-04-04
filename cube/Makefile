#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := cube.cpp

BINS := cube

all: cube

cube: cube.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} cube.o -o cube

cube.o: cube.cpp
	@echo "Creating...."
	${CC} -c cube.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf cube.o cube 
