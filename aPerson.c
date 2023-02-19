#include <stdio.h>

typedef struct
{
    char name[64];
    int age;
    int sex; /* 1: male 2: female error: otherwise*/
} person;

void personalData(person *data);

int main(void)
{
    person data;
    personalData(&data);

    return 0;
}

void personalData(person *data)
{
    int i;

    /* input part */
    printf("Surname: ");
    scanf("%s", data->name);
    printf("Age: ");
    scanf("%d", &data->age);
    do
    {
        printf("Sex (1: Male, 2: Female): ");
        scanf("%d", &data->sex);
    } while (!(data->sex == 1 || data->sex == 2));

    /* output part*/
    printf("Name: %s\n", data->name);
    printf("Age: %d\n", data->age);
    if (data->sex == 1) {
        printf("Sex: Male\n");
    } else if (data->sex == 2) {
        printf("Sex: Female\n");
    }

    return;
}