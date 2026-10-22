//  Check divisibility by 3 and 5

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if((iNo % 3) == 0 && (iNo % 5) == 0)
    {
        printf("Divisible by Both");
    }
    else if((iNo % 3) == 0)
    {
        printf("Divisible by 3 Only");
    }
    else if((iNo % 5) == 0)
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    EXIT_SUCCESS;
}