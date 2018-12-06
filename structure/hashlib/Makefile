#Author: Tianyi Lu

objs = main.o hash.o strdup.o

hash : $(objs)
	gcc -o hash $(objs)

$(objs) : hash.h

.PHONY : clean_all clean_objs

clean_all :
	rm hash $(objs)

clean_objs:
	rm $(objs)
