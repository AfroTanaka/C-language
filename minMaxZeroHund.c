#include <stdio.h>

void minMax(int *min, int *max, int array[], int size);

int main(void)
{
    int min = 100;
    int max = 0;
    int i, array[10], sizeArray;
    sizeArray = sizeof(array) / sizeof(array[0]);

    /* input part */
    for (i = 0; i<sizeArray; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
        if (array[i] == -1) {
            break;
        }
    }
    /*
    do
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
        i++;
    } while (array[i-1] != -1);
    */

    /* call function */
    minMax(&min, &max, array, i);

    /* output part */
    printf("min: %d\nmax: %d\n", min, max);
    return 0;
}

void minMax(int* min, int* max, int array[], int size)
{
    int i;

    /* calculate min */
    for (i=0; i<size; i++) {
        if (*min > array[i]) {
            *min = array[i];
        }
    }

    /* calculate max */
    for (i=0; i<size; i++) {
        if (*max < array[i]) {
            *max = array[i];
        }
    }

    return;
}