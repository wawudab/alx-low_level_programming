This project covers the basics of C and compilation.

File 0-preprocessor is a script that runs a C file through the preprocessor and saves the result into another file.
The C file name will be saved in the variable $CFILE.The output should be saved in the file c.

File 1-compiler is a script that compiles a C file but does not link.
The C file name will be saved in the variable $CFILE.The output file should be named the same as the C file, but with the extension .o instead of .c

File 2-assembler is a script that generates the assembly code of a C code and saves it in an output file.
The C file name will be saved in the variable $CFILE.The output file should be named the same as the C file, but with the extension .s instead of .c

File 3-name is a script that compiles a C file and creates an executable named cisfun.
The C file name will be saved in the variable $CFILE.

File 4-puts.c is a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
Use the function puts.You are not allowed to use printf.Your program should end with the value 0.

File 5-printf.c is a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.
Use the function printf.You are not allowed to use the function puts.Your program should return 0.Your program should compile without warning when using the -Wall gcc option.

File 6-size.c is a C program that prints the size of various types on the computer it is compiled and run on.
Warnings are allowed.Your program should return 0.
E.g.
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)

File 100-intel is a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE.The output file should be named the same as the C file, but with the extension .s instead of .c

File 101-quote.c is a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error.
You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts.Your program should return 1.Your program should compile without any warnings when using the -Wall gcc option.
