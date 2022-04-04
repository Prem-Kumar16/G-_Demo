#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := armstrong.cpp

BINS := armstrong

all: armstrong

armstrong: armstrong.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} armstrong.o -o armstrong

armstrong.o: armstrong.cpp
	@echo "Creating...."
	${CC} -c armstrong.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf armstrong.o armstrong 
