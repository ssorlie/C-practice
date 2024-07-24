#ifndef REGISTERPERSONSERVICE_H
#define REGISTERPERSONSERVICE_H

#include "sharedUtils.h"

typedef struct monthObject
{
    int numberOfDays;
    char name[15];
} monthObject;

// Function prototypes
void registerNewPerson();

void enterName();

void enterPhone();

void enterDOB();

bool validateMonthDay(int monthNumber, int day);

const char* getMonthName(int month);

#endif /* REGISTERPERSONSERVICE_H */