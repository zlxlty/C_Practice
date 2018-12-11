#Author: Tianyi_Lu

comp : file_comp.o
	gcc -o comp file_comp.o

file_comp.o : file_comp.c
	gcc -c file_comp.c

.PHONY : clean_all clean_objs run_test

clean_all :
	rm comp file_comp.o

clean_objs :
	rm file_comp.o

run_test :
	./comp -n "text1.txt" "text2.txt"
