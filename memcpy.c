#include <stdio.h>
#include <memory.h>

int main(void)
{
    int array1[] = {42, 79, 13, 19, 41};
    int array2[] = {1,2,3,4,5};
    int i, sizeArray;

    sizeArray = sizeof(array2) / sizeof(array2[0]);

    for (i = 0; i<sizeArray; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    memcpy(array2, array1, sizeof(array1));

    for (i = 0; i<sizeArray; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}

/*
array
calculate average
たくさんのデータをまとめて取り扱える点
*/