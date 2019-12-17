
isort: question1.o main2.o
	gcc -Wall -o isort main2.o question1.o


txtfind: functions.o main.o
	gcc -Wall -o txtfind main.o functions.o

main.o: main.c functions.h
	gcc -Wall -c main.c

main2.o: main2.c question1.h
	gcc -Wall -c main2.c

functions.o: functions.c functions.h
	gcc -Wall -c functions.c	

question1.o: question1.c question1.h
	gcc -Wall -c question1.c

.PHONY: clean all 

clean:
	rm -f *.o txtfind isort

all: txtfind isort
