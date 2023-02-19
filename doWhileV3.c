#include <stdio.h>

int main(void)
{
    int r;
    double s;

    do {
        printf("Radius: ");
        scanf("%d", &r);
    } while (r < 0);

    s = r * r * 3.14;
    printf("The are is %f.\n", s);

    return 0;
}

/*
回数不明loop
後判定loop
毎年、一%ずつ増えていき15000を超えたら終了
必ず入力を一度させたうえで判定するため。
*/