#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[256];
    int age;
    int sex;
} People;

void inputPeople(People* data);
void showPeople(People data);

int main(void)
{
    int i, count, datasize;
    People* data;

    datasize = 10;
    data = (People*)malloc(sizeof(People) * datasize);

    count = 0;

    while (1) {
        inputPeople(&data[count]);
        if (data[count].age == -1)
            break;
        count++;

        if (count >= datasize) {
            datasize += 10;
            data = (People*)realloc(data, sizeof(People) * datasize);
        }
    }

    for (i=0; i<count; i++) {
        showPeople(data[i]);
    }

    free(data);

    return 0;
}

void inputPeople(People* data)
{
    printf("Name: ");
    scanf("%s", data->name); /* (*data).name */
    printf("Age: ");
    scanf("%d", &data->age);
    printf("Sex(1-Male, 2-Female): ");
    scanf("%d", &data->sex);
    printf("\n");
}

void showPeople(People data)
{
    char sex[16];

    printf("Name: %s\n", data.name);
    printf("Age: %d\n", data.age);

    if (data.sex == 1) {
        strcpy(sex, "Male");
    } else if (data.sex == 2) {
        strcpy(sex, "Female");
    } else {
        strcpy(sex, "No sex");
    }

    printf("Sex: %s\n", sex);
    printf("\n");
}
