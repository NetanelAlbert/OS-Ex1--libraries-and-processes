
CC=gcc
FLAGS=-Wall 

all: $(wildcard *.exe)

1_1.exe: main1_1.o helloAriel.o
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $(FLAGS) $<

libhello.a:	helloAriel.o
	ar -rcs $@ $^

1_2.exe: main1_2.o libhello.a
	$(CC) $(FLAGS) -g $^ -o $@ 


clean: 
	rm -f *.o *.exe *.a *.so	