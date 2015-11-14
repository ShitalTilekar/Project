try : formulaes.o testcode.o
	cc *.o -o project
	clear
formulaes.o : formulaes.c
	cc -c formulaes.c -c
testcode.o : testcode.c
	cc -c testcode.c -c
