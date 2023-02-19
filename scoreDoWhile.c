#include <stdio.h>

int main(void)
{
    int score;

    /* input part */
    do {
        printf("Score: ");
        scanf("%d", &score);
    } while (score < 0 || score > 100);

    printf("Your score: %d\n", score);

    return 0;
}