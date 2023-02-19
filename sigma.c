#include <stdio.h>

int main(void)
{
    int min, max, sum;

    /* input part */
    printf("Input min and max (min, max): ");
    scanf("%d , %d", &min, &max);

    /* Calculation */
    printf("Calculating...\n");
    sum = (min+max)*(max-min+1)/2;

    /* output part */
    printf("Sum of numbers from %d to %d: %d\n", min, max, sum);

    return 0;
}

/*
scanf
&
area of triangle
in scanf function, 文字列処理を行わないと予期せぬエラーを招くため。
*/