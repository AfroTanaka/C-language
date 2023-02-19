#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* heap;

    heap = (int*)malloc(sizeof(int) * 10);
    printf("%p\n", heap);
    heap = (int*)realloc(heap, sizeof(int) * 100);
    printf("%p\n", heap);
    free(heap);
    return 0;
}

/*
動的配列
heap
the program dosn't have free function, so it'll lead to memory leak.
*/