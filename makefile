

CC=gcc

CFLAGS+=-Wall -g

OBJECTS=

all: Exercise11_1a.c Exercise11_1b.c
	$(CC) $(CFLAGS) Exercise11_1a.c -o Exercise11_1a
	$(CC) $(CFLAGS) Exercise11_1b.c -o Exercise11_1b


clean:
	rm -f *~
	rm -f *.o
	rm -f Exercise11_1a
	rm -f Exercise11_1b

run:
	rm -f AtoB.txt
	rm -f BtoA.txt
	touch AtoB.txt
	touch BtoA.txt
	chmod 777 AtoB.txt
	chmod 777 BtoA.txt
	./Exercise11_1a&
	./Exercise11_1b&

kill:
	killall -q Exercise11_1a
	killall -q Exercise11_1b
