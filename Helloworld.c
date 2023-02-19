#include <stdio.h>

int main(void)
{
    printf("Intel\t: Pentium4\nAMD\t: Athlon64\n");
    return 0;
    /*
    Intel  : Pentium4
    AMD    : Athlon64

    why does Intel have two spaces but AMD has four spaces
    despite using same escape sequence?
    */
}