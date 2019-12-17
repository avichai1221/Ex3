

all: functions.o main.o
	gcc -Wall -o txtfind main.o functions.o

main.o: main.c functions.h
	gcc -Wall -c main.c

functions.o: functions.c functions.h
	gcc -Wall -c functions.c	

.PHONY: clean all 

clean:
	rm -f *.o txtfind
