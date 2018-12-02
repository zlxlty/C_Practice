#The second more concise version of Makefile

vpath %.o ../func_pointer

objs = func_comp.o alloc.o lines.o qsort.o

funcp : $(objs)
	gcc -o funcp $(objs)

$(objs) : parray.h

.PHONY : clean_objs clean_all

clean_objs :
	rm $(objs)

clean_all :
	rm funcp $(objs)
