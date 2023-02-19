#include <stdio.h>

#define PRINT_TEMP printf("temp = %d\n", temp)
#define PRINTM(X) printf("%d\n", X)

int main(void)
{
    int temp  = 100;
    int a1 = 100, a2 = 50;
    PRINT_TEMP;
    PRINTM(a1);
    PRINTM(a2);
    return 0;
}