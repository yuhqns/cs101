/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 9 * 9; ++i) {
        printf("%d*%d=%d\t", (i - 1) / 9 + 1, (i - 1) % 9 + 1, ((i - 1) / 9 + 1) * ((i - 1) % 9 + 1));
        if (i % 9 == 0) {
            printf("\n");
        }
    }
    return 0;
}
