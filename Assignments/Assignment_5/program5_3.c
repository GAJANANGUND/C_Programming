// Calculate student grade

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fNo)
{
    if(fNo < 0 || fNo > 100)
    {
        printf("Invalid Marks");
    }
    else if(fNo >= 90 && fNo <= 100)
    {
        printf("Grade A");
    }
    else if(fNo >= 75 && fNo <= 89)
    {
        printf("Grade B");
    }
    else if(fNo >= 60 && fNo <= 74)
    {
        printf("Grade C");
    }
    else if(fNo >= 40 && fNo <= 59)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks : ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    EXIT_SUCCESS;
}