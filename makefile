test : test.o div.o mul.o rem.o
	cc -o test test.o
test.o : test.c 
	cc -c test.c

div.o : div.c
	cc -c div.c

mul.o : mul.c
	cc -c mul.c

rem.o : rem.c
	cc -c rem.c

clean:
	rm *.o test
