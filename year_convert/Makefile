#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := day_to_yr.cpp

BINS := day_to_yr

all: day_to_yr

day_to_yr: day_to_yr.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} day_to_yr.o -o day_to_yr

day_to_yr.o: day_to_yr.cpp
	@echo "Creating...."
	${CC} -c day_to_yr.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf day_to_yr.o day_to_yr 
