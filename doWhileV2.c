#include <stdio.h>

int main(void)
{
    int r;
    double s;

    printf("Radius: ");
    scanf("%d", &r);

    while(r < 0) {
        printf("Radius: ");
        scanf("%d", &r);
    }

    s = r * r * 3.14;
    printf("The are is %f.\n", s);

    return 0;
}