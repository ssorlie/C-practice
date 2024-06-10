#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct monthObject
{
    int numberOfDays;
    char name[15];
} monthObject;

// Function prototypes

void enterName();

void enterPhone();

void enterDOB();

bool validateMonthDay(int monthNumber, int day);

const char* getMonthName(int month);