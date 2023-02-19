#include <stdio.h>

int main(void)
{
    int array1[10];
    int i, sizeArray;

    sizeArray = sizeof(array1) / sizeof(array1[0]);

    /* input part */
    for (i=0;i<sizeArray;i++) {
        printf("Number %2d: ", i+1);
        scanf("%d", &array1[i]);
    }

    /* output part */
    for (i=0;i<sizeArray;i++) {
        printf("array1[%d] = %2d\n", i, array1[9-i]);
    }

    return 0;
}