#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("test.csv", "w");
    fprintf(file, "1,NobiNobita,0\n");
    fprintf(file, "2,MinamotoShizuka,90\n");
    fprintf(file, "3,GodaTakeshi,40\n");
    fprintf(file, "4,HonekawaSuneo,7\n");
    
    fclose(fp);

    return 0;
}