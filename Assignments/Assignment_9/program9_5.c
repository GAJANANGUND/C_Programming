/*
5. Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
*/

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int i = 0, iEvenFact = 0, iOddFact = 0, iDiff = 0;
    iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) == 0)
        {
            iEvenFact = iEvenFact * i;
        }
    }

    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) != 0)
        {
            iOddFact = iOddFact * i;
        }
    }

    iDiff = iEvenFact - iOddFact;
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d ",iRet);

    return EXIT_SUCCESS;
}