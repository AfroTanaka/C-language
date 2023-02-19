#include <stdio.h>

int main(void)
{
    int array1[10];
    int array2[10];
    int i, sizeArray;

    /* input part */
    printf("Input 10 integers\n");
    for(i=0; i<10; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &array1[i]);
    }

    /* calculation part */
    sizeArray = sizeof(array2) / sizeof(array2[0]);
    for (i=0;i<sizeArray;i++) {
        array2[i] = array1[9-i];
    };

    /* output part */
    for (i=0; i< sizeArray; i++) {
        printf("array2[%d] = %2d\n", i, array2[i]);
    }

    return 0;
}