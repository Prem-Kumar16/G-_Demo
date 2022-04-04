#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = g++

LINKERFLAG = -lm

SRCS := HCF.cpp

BINS := HCF

all: HCF

HCF: HCF.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} HCF.o -o HCF

HCF.o: HCF.cpp
	@echo "Creating...."
	${CC} -c HCF.cpp

clean:
	@echo "Cleaning up...."
	rm -rvf HCF.o HCF 
