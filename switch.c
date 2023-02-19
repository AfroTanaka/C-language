#include <stdio.h>

int main(void)
{
    int num;

    /* input part */
    printf("Student number: ");
    scanf("%d", &num);

    /* Analysis part */
    switch (num) {
        case 1:
            printf("Nobi Nobita\n");
            break;
        case 2:
            printf("Minamoto Shizuka\n");
            break;
        case 3:
            printf("Gouda Takeshi\n");
            break;
        case 4:
            printf("Honekawa Suneo\n");
            break;
        default:
            printf("The system couldn't identify that number.\n");
            break;
    }

    return 0;
}