#include <stdio.h>

int main(void)
{
    double left, right;
    
    left = 10;
    right = 3;

    printf("%f\n%f\n%f\n%f\n", left+right,left-right,left*right,left/right);
    return 0;
}

/* 
string literal
*
/
浮動小数点型 float %f
2
2.8....
四捨五入を行うと剰余算の際に不具合が生じるため
*/