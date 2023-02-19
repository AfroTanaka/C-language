#include <stdio.h>

int main(void)
{
    int score;
    
    /* input part */
    printf("Input your score: ");
    scanf("%d", &score);

    /* fix part */
    if (score > 100)
    {
        printf("Your input is invalid, so the system fixed your score as 100.\n");
        score=100;
    }
    
    /* output part */
    printf("Your score: %d\n", score);
    return 0;
}

/*
True
False
Block
Identify whether value is even or odd.
all value is true except for 0
*/