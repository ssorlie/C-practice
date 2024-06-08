#include "registerPerson.h"

// Field variables
char name[30];

int day;
int monthInput;
int year;

int mobileCC = 0;
uint64_t mobileNumber = 0;

/// @brief Entry point for program.
/// Prints result of values typed in
/// @return 0 when complete
int main()
{
    enterName();

    enterPhone();

    enterDOB();

    printf_s("Name           : %s", name);
    printf_s("DOB            : %d. %s, %d\n", day, getMonthName(monthInput), year);
    printf_s("Mobile (CC-Num): +%d-%lld", mobileCC, mobileNumber);

    return 0;
}

/// @brief For typing in and validating name
void enterName()
{
    nameInputSection:
    printf_s("Enter your full name:\n");
    fgets(name, sizeof(name), stdin);

    if (strlen(name) < 6)
    {
        printf_s("Name needs to be 5 characters or longer!\n");
        goto nameInputSection;
    }
    
}

/// @brief For typing and validating phone and CC
void enterPhone()
{
    mobileCCInputSection:
    printf_s("Enter the digits of your mobile-CC:\n");
    scanf("%d", &mobileCC);

    if (mobileCC > 9999)
    {
        printf_s("A CC cannot have more than 4 digits!\n");
        goto mobileCCInputSection;
    }
    
    mobileNumberInputSection:
    printf_s("Enter your mobile number:\n");
    scanf("%lld", &mobileNumber);

    if (mobileNumber <= pow(10, 5))
    {
        printf_s("A mobile number needs to have 6 or more digits!\n");
        goto mobileNumberInputSection;
    }

    if (mobileNumber >= pow(10, 12))
    {
        printf_s("A mobile number cannot have more than 12 digits!\n");
        goto mobileNumberInputSection;
    }
    
}

/// @brief Entering and validation of DOB
void enterDOB()
{
    dayInputSection:
    printf_s("Enter your birthday (Day-number):\n");
    scanf("%d", &day);

    if (day <= 0 || day > 31)
    {
        printf_s("The day of a month cannot be less than 1 and above 31!\n");
        goto dayInputSection;
    }
    
    monthInputSection:
    printf_s("Enter your birth month (Number of month):\n");
    scanf("%d", &monthInput);

    if (monthInput <= 0 || monthInput > 12)
    {
        printf_s("A month can only be a number between 1 and 12!\n");
        goto monthInputSection;
    }

    yearInputSection:
    printf_s("Enter your birth year:\n");
    scanf("%d", &year);
}

/// @brief To fetch month name based on number
/// @param mount Month number (1-12)
/// @return Name of month
const char* getMonthName(int mount) 
{
    static char* mounts[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    if (mount > 1 || mount <= 12)
    {
        return mounts[mount-1];
    }
    
    else {
        return "SECRET MONTH";
    }
}