output: main.o billing.o
	g++ main.o billing.o -o output

main.o: main.c
	g++ -c main.c

billing.o: billing.c billing.h
	g++ -c billing.c

clean:
	rm *.o output