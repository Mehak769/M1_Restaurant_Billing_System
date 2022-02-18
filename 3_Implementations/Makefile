output: main.o billing.o
	gcc main.o billing.o -o output

main.o: main.c
	gcc -c main.c

billing.o: billing.c billing.h
	gcc -c billing.c

clean:
	rm *.o output
	