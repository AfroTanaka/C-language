#include <stdio.h>

int main(void)
{
    const double EXCISETAX = 0.05;
    int price;

    printf("Base price: ");
    scanf("%d", &price);
    price = (int)((1+EXCISETAX) * price);
    printf("Tax-included price: %d", price);

    return 0;
}