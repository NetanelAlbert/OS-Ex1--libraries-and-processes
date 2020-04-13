
CC=gcc
FLAGS=-Wall 
FILES=../1/helloAriel.o
HEADERS := $(wildcard *.h)
#EXES := $(wildcard *.exe)

1_2.exe: main1_2.o libhello.a
	$(CC) $(FLAGS) -g $^ -o $@ 

libhello.a:	$(FILES)
	ar -rcs $@ $^

%.o: %.c
	$(CC) -c $(FLAGS) $<

clean: 
	rm -f *.o *.exe *.a *.so	
