#AUTHOR: Tianyi Lu

objs = keywords.o binsearch.o getch.o

key : $(objs)
	gcc -o key $(objs)

keywords.o : keywords.c keywords.h getch.h
	gcc -c keywords.c

binsearch.o : binsearch.c keywords.h
	gcc -c binsearch.c

getch.o : getch.c getch.h
	gcc -c getch.c

.PHONY : clean_all clean_objs

clean_all :
	rm key $(objs)

clean_objs :
	rm $(objs)
