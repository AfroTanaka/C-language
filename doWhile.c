#include <stdio.h>

int main(void)
{
    int r;
    double s;

    printf("Radius: ");
    scanf("%d", &r);

    if (r<0) {
        printf("Radius is never a negative integer.\n");
    } else {
        s = r * r * 3.14;
        printf("The area is %f.\n", s);
    }

    return 0;
}