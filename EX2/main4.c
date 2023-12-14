/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int i = 2100;
    if (i%400 == 0 || (i%4 == 0 && i%100 != 0)) {
        printf("閏年");
    }
    else {
        printf("不是閏年");
    }
    return 0;
}
