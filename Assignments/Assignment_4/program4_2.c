// Check even or odd number

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Even Number..");
    }
    else
    {
        printf("Odd Number..");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}