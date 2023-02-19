#include <stdio.h>

int main(void)
{
    char c = '0';
    int number;

    if (c >= '0' && c <= '9') {
        number = c - '0';
    } else {
        number = 99;
    }

    printf("%d\n", number);
    return 0;
}