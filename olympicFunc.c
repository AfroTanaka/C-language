#include <stdio.h>

int olympic_calculator(int); /* prototype declaration */

int main(void)
{
    int year, result;
    
    /* input part */
    printf("Year: ");
    scanf("%d", &year);

    /* output part */
    result = olympic_calculator(year);
    switch (result) /* if result == 1: summer, 2: winter, no olympic otherwise */
    {
        case 1:
            printf("Summer olympic\n");
            break;
        case 2:
            printf("Winter olympic\n");
            break;
        case 99:
            printf("No olympic year");
            break;
    }

    return 0;
}

int olympic_calculator(int year)
{
    if (year % 4 == 0)
        return 1;
    else if (year % 2 == 0)
        return 2;
    else
        return 99;
}