#include <stdio.h>
#include <string.h>

struct student
{
    int year;
    int group;
    int number;
    char name[64];
    double height;
    double weight;
};

int main(void)
{
    struct student data1, data2;

    /* Assign to data 1 */
    data1.year = 3;
    data1.group = 4;
    data1.number = 18;
    strcpy(data1.name, "MARIO");
    data1.height = 168.2;
    data1.weight = 72.4;

    data2 = data1; /* data1 copy to data2 */

    /* Display data1 and data2 */
    printf("data1.year = %d : data2.year = %d\n", data1.year, data2.year);
    printf("data1.group = %d : data2.group = %d\n", data1.group, data2.group);
    printf("data1.number = %d : data2.number = %d\n", data1.number, data2.number);
    printf("data1.name = %s : data2.name = %s\n", data1.name, data2.name);
    printf("data1.height = %f : data2.height = %f\n", data1.height, data2.height);
    printf("data1.weight = %f : data2.weight = %f\n", data1.weight, data2.weight);

    return 0;
}