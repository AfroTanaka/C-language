#include <stdio.h>

int count(int);

int main(void)
{
    int counter = 0;
    printf("counter addr: %d\n", &counter);
    count(counter);
    count(counter);
    count(counter);
    return 0;
}

int count(int counter)
{
    printf("counter: %d\n", &counter);
    counter++;
    printf("counter: %d\n", &counter);
    printf("%d\n", counter);
    return counter;
}