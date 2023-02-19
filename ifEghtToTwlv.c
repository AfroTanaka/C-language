#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    if (value >= 8 && value <= 12)
        printf("The number is between 8 to 12.\n");
    
    if (!(value >= 8 && value <= 12))
        printf("The number isn't between 8 to 12\n");
    
    return 0;
}