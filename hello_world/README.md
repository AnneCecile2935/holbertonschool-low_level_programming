0-preprocessor : gcc -E $CFILE > c :  write a script that runs a C file through the preprocesseur and save the result in another file
1-compiler : gcc -c $CFILE : write a script that compiles a C file but does not link
2-assembler: gcc -S $CFILE: write a script that generates the assembly code of a C code and save it in an output file : in the C file main.c, the output file should be main.s
3-name : gcc $CFILE -o cisfun : write a script that compiles a C file and create an executable named cisfun
4-puts.c : puts("\"Programming is like building..."); : write a programm that prints exactly. Puts print a string of characteres and followed a new line automatically.
5-printf.c : printf("with....\n") : write a programm that print exactlyl a sentence, Printf prints a string of characteres also without a new followed line
6-size.c : printf("Size of char: %lu bytes\n", sizeof(char));  prints the size of char in bytes using char and %lu for all types.

