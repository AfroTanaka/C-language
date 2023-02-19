#include <stdio.h>

int main(void)
{
    int array[] = {42, 79, 13, 75, 19};
    int i;
    int arrayCount = sizeof(array) / sizeof(array[0]);

    printf("each size = %d\nsize = %d\n# of factor = %d\n", sizeof(array[0]),sizeof(array), sizeof(array)/sizeof(array[0]));
    
    for (i = 0; i < arrayCount; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}