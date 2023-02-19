#include <stdio.h>

enum
{
    SUMMER = 1,
    WINTER,
    NO_OLYMPIC,
};

int olympicJudge(int);

int main(void)
{
    int year;

    /* input part */
    do
    {
        printf("Year: ");
        scanf("%d", &year);
    } while (year < 1896);

    /* output part */
    switch (olympicJudge(year))
    {
        case SUMMER:
            printf("Summer olympic\n");
            break;
        case WINTER:
            printf("Winter olympic\n");
            break;
        case NO_OLYMPIC:
            printf("No olympic year\n");
            break;
    }

    return 0;
}

int olympicJudge(int year)
{
    /* analysis part */
    if (year % 4 == 0) {
        return SUMMER;
    } else if (year % 2 == 0) {
        return WINTER;
    } else {
        return NO_OLYMPIC;
    }
}