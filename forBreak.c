#include <stdio.h>

int main(void)
{
    int i;

    for (i=1; i<=10; i++) {
        printf("%d\n", i);
        if (i == 3) break; /* fin loop */
    }

    return 0;
}

/*
i
infinite loop
output discount price
if i is 9 in for statement, the program will count nine times.
*/