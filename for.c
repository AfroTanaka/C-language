#include <stdio.h>

int main(void)
{
    int i;

    for (i=1; i<=9999; i++) {
        printf("%04d\n", i);
    }

    return 0;
}