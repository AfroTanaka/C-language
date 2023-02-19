#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    if (value == 10)
        printf("It's ten.\n");
    
    if (value > 10)
        printf("It's greater than ten.\n");
    
    if (value < 10)
        printf("It's less than 10\n");
    
    return 0;
}