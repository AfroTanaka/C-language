#include <stdio.h>

int main(void)
{
    int *data;
    int average = 0, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

    for (data = array; data != &array[10]; data++) {
        average += *data;
    }

    printf("%d\n", average / 10);
    return 0;
}

/*
address
pointer
valueのアドレスを関数sumに渡して、計算結果をポインタ変数ansを通して変数valueに
格納しているため。
ショートカット
*/