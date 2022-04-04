#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := sizeof_cmd.cpp

BINS := sizeof_cmd

all: sizeof_cmd

sizeof_cmd: sizeof_cmd.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} sizeof_cmd.o -o sizeof_cmd

sizeof_cmd.o: sizeof_cmd.cpp
	@echo "Creating...."
	${CC} -c sizeof_cmd.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf sizeof_cmd.o sizeof_cmd 
