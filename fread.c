#include <stdio.h>

int main(void)
{
    int buf[4];
    FILE *file;

    file = fopen("test.dat", "rb");
    fread(buf, sizeof(buf), 1, file);
    fclose(file);

    printf("%d\n", buf[3]);
    return 0;
}