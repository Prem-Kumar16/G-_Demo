#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := inches_to_feet.cpp

BINS := inches_to_feet

all: inches_to_feet

inches_to_feet: inches_to_feet.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} inches_to_feet.o -o inches_to_feet

inches_to_feet.o: inches_to_feet.cpp
	@echo "Creating...."
	${CC} -c inches_to_feet.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf inches_to_feet.o inches_to_feet 
