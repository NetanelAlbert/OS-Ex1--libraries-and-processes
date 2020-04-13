
CC=gcc
FLAGS=-Wall 
FILES=helloAriel.o
HEADERS := $(wildcard *.h)
#EXES := $(wildcard *.exe)

1_1.exe: main1_1.o $(FILES)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $(FLAGS) $<

clean: 
	rm -f *.o *.exe *.a *.so	
