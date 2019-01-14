#Author: Tianyi Lu

io : basicio.o
	gcc -o io basicio.o

basicio.o : basicio.c
	gcc -c basicio.c

.PHONY : clean_objs txtin stdin txtout

clean_objs :
	rm basicio.o

txtin :
	./io < text.txt

stdin :
	./io

txtout :
	./io > text.txt
