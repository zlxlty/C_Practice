#Author: Tianyi Lu

vpath %.c ../struct_array
vpath %.h ../struct_array

objs = talloc.o bintree.o getch.o main.o

bintree : $(objs)
	gcc -o bintree $(objs)

talloc.o : talloc.c talloc.h
	gcc -c talloc.c

bintree.o : bintree.c bintree.h
	gcc -c bintree.c

getch.o : getch.c getch.h
	gcc -c getch.c

main.o : main.c bintree.h
	gcc -c main.c

.PHONY : clean_all clean_objs

clean_all :
	rm bintree $(objs)

clean_objs :
	rm $(objs)
