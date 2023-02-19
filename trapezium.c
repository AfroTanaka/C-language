#include <stdio.h>

#define GET_TRAPEZIUM_AREA(A, B, H) (((A)+(B)) * (H) / 2)

int main(void)
{
    int up, down, h, s;

    printf("up,down,height: ");
    scanf("%d,%d,%d", &up, &down, &h);
    s = GET_TRAPEZIUM_AREA(up, down, (h+3));
    printf("Area: %d\n", s);

    return 0;
}

/*
constant
macro
calculate the area of triangle
直接書き込むと、後で値を変更する際に複数個所の修正が必要。定数はプログラムを通して使われる
場合が多いので、スコープの観点から変数とは分けて使うべき。
*/