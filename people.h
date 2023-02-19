/* People.h */
#ifndef __PEOPLE_H__
#define __PEOPLE_H__

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[256];
    int age;
    int sex;
} People;

/* input personal data */
extern void InputPeople(People* data);

/* Display personal data */
extern void ShowPeople(People data);

#endif