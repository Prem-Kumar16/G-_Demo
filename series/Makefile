#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := series.cpp

BINS := series

all: series

series: series.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} series.o -o series

series.o: series.cpp
	@echo "Creating...."
	${CC} -c series.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf series.o series 
