#include <stdio.h>
#include <string.h>

typedef struct 
{
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
} student;

int main(void)
{
    student data;
    student *pdata;

    pdata = &data;
    pdata->year = 10;
    (*pdata).year = 10; /* . が優先されるため()をつける  */

    strcpy(pdata->name, "MARIO");
    strcpy((*pdata).name, "MARIO");

    return 0;
}
