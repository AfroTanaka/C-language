#include <stdio.h>

int main(void)
{
    int *p;
    int i;

    p = &i;
    *p = 10; /* after mode change, 10 is inserted to *p */
    printf("*p = %d\n", *p);
    printf("i = %d\n", i);

    return 0;
}