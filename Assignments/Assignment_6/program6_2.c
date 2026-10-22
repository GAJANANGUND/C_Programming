//  Check admission eligibility

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if(fMarks < 0 || fMarks > 100 || iAge < 0 || iAge > 100)
    {
        printf("Invalid input");
    }
    else if(fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age : ");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks,iAge);

    EXIT_SUCCESS;
}