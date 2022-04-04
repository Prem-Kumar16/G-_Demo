#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := ci.cpp

BINS := ci

all: ci

ci: ci.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} ci.o -o ci

ci.o: ci.cpp
	@echo "Creating...."
	${CC} -c ci.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf ci.o ci 
