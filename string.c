#include <stdio.h>

int main(void)
{
    char str[] = {'M', 'A', 'R', 'I', 'O','\0'};
    printf("%s\n", str);
    printf("%d\n", sizeof(str));
    return 0;
}