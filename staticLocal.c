#include <stdio.h>

int countfunc(void);

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    static int count; /* static local variable */

    count++;
    printf("%d\n", count);

    return count;
}