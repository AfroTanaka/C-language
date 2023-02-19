#include <stdio.h>

int main(void)
{
    int softdrink, milk, charge;
    double tax;

    softdrink = 198;
    milk = 138;
    tax = 1.05;
    charge = (int)(1000.0 - (tax * (double)(softdrink + milk * 2)));
    
    printf("%d yen\n", charge);
}

/* if we adjust integer, it'll be create errors */