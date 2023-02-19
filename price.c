#include <stdio.h>

#define EXCISETAX 0.05

int main(void)
{
    int price;

    printf("Base price: ");
    scanf("%d", &price);
    price = (int)((1 + EXCISETAX) * price); /* use constant value*/
    printf("Tax-included price: %d\n", price);

    return 0;
}