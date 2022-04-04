#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := table.cpp

BINS := table

all: table

table: table.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} table.o -o table

table.o: table.cpp
	@echo "Creating...."
	${CC} -c table.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf table.o table 
