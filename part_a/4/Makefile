CC=gcc
FLAGS=-Wall 
FILES=helloAriel.o
HEADERS := $(wildcard *.h)
#EXES := $(wildcard *.exe)

all: ../1/1_1.exe ../2/1_2.exe ../3/1_3.exe

../1/1_1.exe:
	cd ../1 && make && cd ../4

../2/1_2.exe:
	cd ../2 && make && cd ../4

../3/1_3.exe:
	cd ../3 && make && cd ../4

clean: 
	cd ../1 && make clean && cd ../2 && make clean && cd ../3 && make clean && cd ../4	
