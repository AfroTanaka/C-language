#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    if (value == 10) {
        printf("It's ten.\n");
    } else {
        printf("It's not ten.\n");
    }
    
    return 0;
}