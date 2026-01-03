/*
========================================================
Program Title  : Installation of VS Code & GCC and
                 Execution of First C Program
Language       : C
========================================================
*/

/*
-------------------------
AIM:
-------------------------
To install Visual Studio Code and GCC compiler
and to write, compile, and execute the first C program.
*/

/*
-------------------------
SOFTWARE REQUIRED:
-------------------------
1. Visual Studio Code
2. GCC Compiler (MinGW)
3. Windows Operating System
*/

/*
-------------------------
INSTALLATION OF VS CODE:
-------------------------
1. Open web browser
2. Search "VS Code download"
3. Download VS Code for Windows
4. Run installer and complete installation
5. Open VS Code
*/

/*
-------------------------
INSTALLATION OF GCC:
-------------------------
1. Search "MinGW GCC download"
2. Install MinGW
3. Select gcc compiler
4. Add MinGW bin folder to Path
5. Verify using command:
   gcc --version
*/

/*
-------------------------
STEPS TO EXECUTE C PROGRAM:
-------------------------
1. Open VS Code
2. Create a new file and save as hello.c
3. Write C program
4. Open terminal
5. Compile using gcc
6. Execute the program
*/

/*
-------------------------
COMPILATION COMMAND:
-------------------------
gcc hello.c -o hello
*/

/*
-------------------------
EXECUTION COMMAND:
-------------------------
hello
*/

#include <stdio.h>   // Header file for input-output functions

int main() {
    // printf() function prints output on screen
    printf("Hello World");

    // return 0 indicates successful execution
    return 0;
}

/*
-------------------------
OUTPUT:
-------------------------
Hello World
*/

/*
-------------------------
RESULT:
-------------------------
Thus, Visual Studio Code and GCC compiler were
successfully installed and the first C program
was executed successfully.
*/
