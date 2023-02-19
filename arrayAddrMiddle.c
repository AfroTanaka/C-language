#include <stdio.h>

int main(void)
{
    char str[256] = "DRAGON";
    scanf("%s", &str[6]); /* from in the middle of array address */
    printf("%s\n", str);

    return 0;
}