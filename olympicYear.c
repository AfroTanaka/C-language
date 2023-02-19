#include <stdio.h>

int main(void)
{
    int year;

    /* input part */
    printf("Year: ");
    scanf("%d", &year);

    /* analysis part */
    if (year % 4 == 0)
        printf("%d is summer orynpic year\n", year);
    else if (year % 2 == 0)
        printf("%d is winter orynpic year\n", year);
    else
        printf("%d is no orynpic year\n", year);
    
    return 0;
}