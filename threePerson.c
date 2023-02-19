#include <stdio.h>

typedef struct
{
    char name[64];
    int age;
    int sex; /* 1: male 2: female error: otherwise*/
} person;

void inputData(person data[]);
void outputData(person data[]);

int main(void)
{
    person data[3];
    inputData(data);
    outputData(data);

    return 0;
}

void inputData(person data[])
{
    int i;

    /* input part */
    for (i = 0; i< 3; i++)
    {
        printf("Surname: ");
        scanf("%s", data[i].name);
        printf("Age: ");
        scanf("%d", &data[i].age);
        do
        {
            printf("Sex (1: Male, 2: Female): ");
            scanf("%d", &data[i].sex);
        } while (!(data[i].sex == 1 || data[i].sex == 2));
        printf("\n");
    }

    return;
}

void outputData(person data[])
{
    int i;

    /* output part*/
    for (i = 0; i< 3; i++)
    {
        printf("Name: %s\n", data[i].name);
        printf("Age: %d\n", data[i].age);
        if (data[i].sex == 1) {
            printf("Sex: Male\n");
        } else if (data[i].sex == 2) {
            printf("Sex: Female\n");
        }
        printf("\n");
    }

    return;
}

