/*
5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("%d ",iNo*i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}