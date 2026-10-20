// Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = iNo;
    while (iCnt >= 1)
    {
        printf(" * ");
        iCnt--;
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}