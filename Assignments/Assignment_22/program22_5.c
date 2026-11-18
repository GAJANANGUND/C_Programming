/*
5. Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0, j = 0;

    for(i = 1, j = 2; i <= iNo; i++, j += 2)
    {
        printf("%d\t",j);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}