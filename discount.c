#include <stdio.h>

int main(void)
{
    double disOne, disThr, disFv, disEght;
    int price;

    /* input part */
    printf("How much: ");
    scanf("%d", &price);

    /* calculate discount */
    disOne = price - price * 0.1;
    disThr = price - price * 0.3;
    disFv = price - price * 0.5;
    disEght = price - price * 0.8;

    /* output part */
    printf("discount 10 per = %d\ndiscount 30 per = %d\ndiscount 50 per = %d\ndiscount 80 per = %d\n", (int)disOne, (int)disThr, (int)disFv, (int)disEght);

    return 0;
}