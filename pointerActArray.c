#include <stdio.h>

int main(void)
{
    int *data;
    int i, average = 0, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

    data = array; /* assign array's address to data */

    for (i = 0; i< 10; i++)
    {
        average += data[i]; /* looks like array */
    }

    printf("%d\n", average / 10);
    return 0;
}