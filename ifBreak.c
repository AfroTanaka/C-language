#include <stdio.h>

int main(void)
{
    int array[5];
    int i;

    for (i = 0; i< 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
        if (array[i] == 100) {
            break;
        } else {
            scanf("%d", &array[i]);
        }
    }
    printf("Hello");
    return 0;
}