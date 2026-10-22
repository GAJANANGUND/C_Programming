//  Check leap year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid");
    }
    else if((iNo % 4) == 0 && (iNo % 100) != 0)
    {
        printf("Leap year");
    }
    else if((iNo % 400) == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a Leap year");
    } 
}

int main()
{
    int year = 0;

    printf("Enter year : ");
    scanf("%d",&year);

    CheckLeapYear(year);

    EXIT_SUCCESS;
}