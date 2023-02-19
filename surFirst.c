#include <stdio.h>

int main(void)
{
    char name[100];
    char first[50];

    /* input part */
    printf("Surname: ");
    scanf("%s", name);
    printf("Firstname: ");
    scanf("%s", first);

    /* combine part */
    sprintf(name, "%s %s\n", name, first);

    /* output part */
    printf("%s", name);

    return 0;
}