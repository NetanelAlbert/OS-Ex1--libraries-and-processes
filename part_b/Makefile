CC=gcc
FLAGS=-Wall 
FILES=../1/helloAriel.o
HEADERS := $(wildcard *.h)

all: 2_1.exe 2_2.exe 2_3.exe 2_4.exe

2_4b.exe: main2_4b.o 2_1.exe 2_2.exe 2_3.exe
	$(CC) $(FLAGS) -g $< -o $@

%.exe: main%.o
	$(CC) $(FLAGS) -g $^ -o $@

clean:
	rm -f *.o *.exe *.a *.so