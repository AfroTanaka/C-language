#include <stdio.h>

int main(void)
{
    int i = 23, j = 56;
    FILE *file;
    file = fopen("test.txt", "w");
    fprintf(file, "%d,%d\n", i,j);
    fclose(file);
    return 0;
}