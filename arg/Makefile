#The first makefile by myself

objects = find_plus.o alloc.o lines.o

find_plus : $(objects)
	gcc -o find_plus $(objects)

find_plus.o : find_plus.c parray.h
	gcc -c find_plus.c

alloc.o : alloc.c parray.h
	gcc -c alloc.c

lines.o : lines.c parray.h
	gcc -c lines.c

.PHONY : clean_objs clean_all

clean_objs :
	rm $(objects)

clean_all :
	rm find_plus $(objects)
