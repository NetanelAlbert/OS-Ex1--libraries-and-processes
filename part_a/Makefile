
CC=gcc
FLAGS=-Wall 
FILES=helloAriel.o
HEADERS := $(wildcard *.h)
#EXES := $(wildcard *.exe)

all: 1_1.exe 1_2.exe 1_3.exe

1_1.exe: main1_1.o $(FILES)
	$(CC) $^ -o $@

libhello.a:	$(FILES)
	ar -rcs $@ $^

1_2.exe: main1_2.o libhello.a
	$(CC) $(FLAGS) -g $^ -o $@ 

libhello.so: $(FILES)
	gcc -shared $^ -o $@

1_3.exe: libhello.so main1_3.o	
	gcc -Wall -g -o $@ main1_3.o ./$< 





%.o: %.c
	$(CC) -c $(FLAGS) $<

clean: 
	rm -f *.o *.exe *.a *.so	