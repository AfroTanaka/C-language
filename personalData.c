#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[64];
    int age;
    int sex;
}Person;

void inputData(Person data[], int* num_p);
void outputData(Person data[], int* num_p);

int main(void)
{
    Person *data;
    int num_p;

    printf("Enter the number of personal data: ");
    scanf("%d", &num_p);

    data = (Person*)malloc(num_p*sizeof(Person)); /* get memory for # of num_p */

    inputData(data, &num_p);
    outputData(data, &num_p);

    free(data);

    return 0;
}

/* input part */
void inputData(Person data[], int* num_p)
{
    int i = 0;

    do
    {
        printf("Name: ");
        scanf("%s", data[i].name);
        printf("Age: ");
        scanf("%d", &data[i].age);
        if (data[i].age == -1) {
            *num_p = i;
            printf("\n");
            break;
        }
        printf("Sex (1: Male 2: Female): ");
        scanf("%d", &data[i].sex);
        if (!(data[i].sex == 1 || data[i].sex == 2))
            data[i].sex = 3;
        printf("\n");
        i++;
    } while(i<*num_p);

    return;
}

/* output part */
void outputData(Person data[], int* num_p)
{
    int i=0;
    while (i < *num_p)
    {
        printf("Name: %s\n", data[i].name);
        printf("Age: %d\n", data[i].age);
        if (data[i].sex == 1) {
            printf("Male\n");
        } else if (data[i].sex == 2) {
            printf("Female\n");
        } else {
            printf("No sex\n");
        }
        printf("\n");
        i++;
    }

    return;
}
