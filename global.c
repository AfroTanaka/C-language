#include <stdio.h>

int count; /* global variable */

int countfunc(void);

int main(void)
{
    int count; /* same name as global variable */

    countfunc();
    count = 10;  /* change global variable */
    countfunc();
    countfunc();
    printf("main : count = %d\n", count);
    return 0;
}

int countfunc()
{
    count++;
    printf("%d\n", count);
    return count;
}