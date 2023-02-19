/* sum.c */
int Public; /* make instance */


int sum (int min, int max)
{
    int num;
    num = (min + max) * (max - min + 1) / 2;
    Public = 100;
    return num;
}