#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[256], str2[] = "DRAGONQUEST";

    scanf("%s", str1);

    if (strcmp(str1, str2) == 0) {
        printf("Same\n");
    } else {
        printf("Not same\n");
    }
    
    return 0;
}

/*
string code
'\0'
Display 'A' to 'Z'

*/