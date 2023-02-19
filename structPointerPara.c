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

void student_print(student *data);

int main(void)
{
    student data;

    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 72.4;

    student_print(&data);

    return 0;
}

/* student *data = &data */
void student_print(student *data)
{
    printf("Year: %d\n", (*data).year);
    data->year = 10;
    printf("Year: %d\n", data->year);
    printf("Class: %d\n", data->clas);
    printf("Name: %s\n", data->name);
    printf("Height: %f\n", data->stature);
    printf("Weight: %f\n", data->weight);
    return;
}

/*
構造体
異なるデータ型を一つのまとまりとして使うため。
*/
