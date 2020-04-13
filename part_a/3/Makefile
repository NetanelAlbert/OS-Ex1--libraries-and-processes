
CC=gcc
FLAGS=-Wall 
FILES=../1/helloAriel.o
HEADERS := $(wildcard *.h)
#EXES := $(wildcard *.exe)

1_3.exe: libhello.so main1_3.o	
	gcc -Wall -g -o $@ main1_3.o ./$< 

libhello.so: $(FILES)
	gcc -shared $^ -o $@


%.o: %.c
	$(CC) -c $(FLAGS) $<

clean: 
	rm -f *.o *.exe *.a *.so	
