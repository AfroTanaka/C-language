#include <stdio.h>

int main(void)
{
    int num;
    
    /* Input part */
    printf("Student number: ");
    scanf("%d", &num);

    /* Analysis part */
    if (num == 1)
        printf("Nobi Nobita: Male\n");
    else if (num == 2)
        printf("Minamoto Shizuka: Female\n");
    else if (num == 3)
        printf("Gouda Takeshi: Male\n");
    else if (num == 4)
        printf("Honekawa Suneo: Male\n");
    else
        printf("The system couldn't identify that number\n");
    
    return 0;
}