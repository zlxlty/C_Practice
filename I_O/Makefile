#Author: Tianyi Lu

input output: input.o output.o
	gcc -o input input.o && gcc -o output output.o

input.o : input.c
	gcc -c input.c

output.o : output.c
	gcc -c output.c

.PHONY : clean_all clean_objs run

clean_all :
	rm input output input.o output.o

clean_objs :
	rm input.o output.o

run:
	./input | ./output
