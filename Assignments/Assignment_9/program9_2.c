/*
2. Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700
*/

#include<stdio.h>
#include<stdlib.h>

int DollerToINR(int iNo)
{
    int iRupees = 0;

    iRupees = iNo * 70;

    return iRupees;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d ",iRet);

    return EXIT_SUCCESS;
}