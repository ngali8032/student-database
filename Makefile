//Makefile
database : main.o delete.o find.o insert.o print.o save.o sort.o sync.o
        gcc main.o delete.o find.o insert.o print.o save.o sort.o sync.o -o database
main.o : main.c
        gcc -c main.c
delete.o : delete.c
        gcc -c delete.c
find.o : find.c
        gcc -c find.c
insert.o : insert.c
        gcc -c insert.c
print.o : print.c
        gcc -c print.c
save.o : save.c
        gcc -c save.c
sort.o : sort.c
        gcc -c sort.c
sync.o : sync.c
        gcc -c sync.c
run : database
        ./database
