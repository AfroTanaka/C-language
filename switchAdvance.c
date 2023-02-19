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
        case 3:
        case 4:
            printf("Male\n");
            break;
        case 2:
            printf("Female\n");
            break;
        default:
            printf("The system couldn't identify that number.\n");
            break;
    }
    
    return 0;
}

/*
else
else-if
switch
The program identify whether the year is olympic year or not.
Moreover, it also identify the year is held summer or winter.
if there's no break, the program will execute until the end of switch statement.
It might lead to unintentional error.
*/