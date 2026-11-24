student: stud_main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_sort.o stud_rev_link.o stud_count.o
	cc stud_main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_sort.o stud_rev_link.o stud_count.o -o student

# Generate object files from source files

stud_main.o: stud_main.c student.h
	cc -c stud_main.c

stud_add.o: stud_add.c student.h
	cc -c stud_add.c

stud_del.o: stud_del.c student.h
	cc -c stud_del.c

stud_show.o: stud_show.c student.h
	cc -c stud_show.c

stud_mod.o: stud_mod.c student.h
	cc -c stud_mod.c

stud_save.o: stud_save.c student.h
	cc -c stud_save.c

stud_sort.o: stud_sort.c student.h
	cc -c stud_sort.c

stud_rev_link.o: stud_rev_link.c student.h
	cc -c stud_rev_link.c

stud_count.o: stud_count.c student.h
	cc -c stud_count.c

# Clean generated files

clean:
	@echo "Cleaning up..."
	rm -f *.o student

