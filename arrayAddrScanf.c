#include <stdio.h>

int main(void)
{
    char str[256];
    scanf("%s", &str[0]); /* address of element 0 */
    printf("%s\n", str);

    return 0;
}