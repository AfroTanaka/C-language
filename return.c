#include <stdio.h>

int sum(int, int);

int main(void)
{
    int value;
    value = sum(50, 100);
    printf("%d\n", value);
    return 0;
}

int sum(int min, int max)
{
    int num;
    num = (min + max) * (max - min + 1) / 2;
    return num;
}

/*
prototype declaration
formal parameter
actual parameter
return value
The function calculates the area of triangle.
To generalize the program
*/