/*
1. Write a program which accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large.
Input : 75
Output : Medium
*/

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo > 100)
    {
        printf("Large");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Small");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}