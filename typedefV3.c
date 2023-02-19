#include <stdio.h>
#include <string.h>

typedef struct
{
    int year;
    int group;
    int number;
    char name[64];
    double height;
    double weight;
} student;

void student_print(student data);

int main(void)
{
    student data;
    
    data.year = 3;
    data.group = 4;
    data.number = 18;
    strcpy(data.name, "MARIO");
    data.height = 168.2;
    data.weight = 72.4;

    student_print(data); /* call function */

    return 0;
}

void student_print(student data)
{
    printf("Year: %d\n", data.year);
    printf("Class: %d\n", data.group);
    printf("Number: %d\n", data.number);
    printf("Name: %s\n", data.name);
    printf("Height: %f\n", data.height);
    printf("Weight: %f\n", data.weight);

    return;
}