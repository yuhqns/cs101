/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int x = -9;
    int y = 9;
    int z = 1;
    if (x < 0) {
        int sum = (x*-1)*100 + y*10 + z;
        printf("%d", sum*-1);
    }
    else {
        printf("%d", x*100 + y*10 + z);
    }
    return 0;
}
