#include <stdio.h>

void func(int* pvalue); /* prototype declaration */

int main(void)
{
    int value = 10;
    printf("value = %d\n", value);
    printf("&value = %p\n", &value);
    func(&value); /* call by address */
    printf("value = %d\n", value);
    return 0;
}

/* int* pvalue = &value */
void func (int* pvalue)
{
    printf("pvalue = %p\n", pvalue);
    *pvalue = 100; /* mode change */
    return;
}