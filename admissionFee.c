#include <stdio.h>

int main(void)
{
    int age;
    
    /* Input part */
    printf("Age: ");
    scanf("%d", &age);

    /* Analysis part */
    if (age <= 3)
        printf("Infant: Free\n");
    else if (age > 3 && age < 13)
        printf("Child: 250 yen\n");
    else
        printf("Adult: 400 yen\n");
    
    return 0;

}