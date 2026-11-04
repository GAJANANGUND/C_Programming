/*
5. Write a program which accept total marks & obtained marks from user and
calculate percentage.

Input : 1000 745
Output : 74.5%
*/

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fPercent = 0.0;

    fPercent = ((float)iNo2 / (float)iNo1) * 100;
    
    return fPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter three numbers : ");
    scanf("%d %d",&iValue1,&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%.1f%%",fRet);

    return EXIT_SUCCESS;
}