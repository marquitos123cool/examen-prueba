
debug: main.o strlen.o
	gcc -g -o program_debug.bin main.o strlen.o

release: main.o strlen.o
	gcc -o program_release.bin main.o strlen.o

main.o: main.c
	gcc -c main.c

strlen.o: strlen.asm
	nasm -f elf64 -o strlen.o strlen.asm

clean:
	rm -f strlen.bin strlen.o main.o