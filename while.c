#include <stdio.h>

int main(void)
{
    int money = 1;
    int month = 1;

    while (money < 1000000) {
        printf("%02d month : %7d yen\n", month, money);
        money *= 2;
        month++;
    }

    printf("%02d month is %7d yen. So, it's greater than a million.\n", month, money);

    return 0;
}