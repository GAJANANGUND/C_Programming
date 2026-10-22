//  Find the greatest of three numbers

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        printf("%d is Greatest",iNo1);
    }
    else if(iNo2 >= iNo1 && iNo2 >= iNo3)
    {
        printf("%d is Greatest",iNo2);
    }
    else if(iNo3 >= iNo1 && iNo3 >= iNo2)
    {
        printf("%d is Greatest",iNo3);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    printf("Enter third number : ");
    scanf("%d",&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    EXIT_SUCCESS;
}