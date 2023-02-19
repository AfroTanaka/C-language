/* People.c */

#include "People.h"

void InputPeople(People* data)
{
    printf("Name: ");
    scanf("%s", data->name);
    printf("Age: ");
    scanf("%d", &data->age);
    printf("Sex(1-Male, 2-Female): ");
    scanf("%d", &data->sex);
    printf("\n");
}

void ShowPeople(People data)
{
    char sex[16];

    printf("Name: %s\n", data.name);
    printf("Age: %d\n", data.age);

    if (data.sex == 1) {
        strcpy(sex, "Male");
    } else {
        strcpy(sex, "Female");
    }

    printf("Sex: %s\n", sex);
    printf("\n");
}