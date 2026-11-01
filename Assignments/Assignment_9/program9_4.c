/*
4. Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
*/

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iFact = 0, i = 0;
    iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) != 0)
        {
            iFact = iFact * i;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is : %d ",iRet);

    return EXIT_SUCCESS;
}