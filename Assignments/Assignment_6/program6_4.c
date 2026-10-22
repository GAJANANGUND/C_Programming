//  Check triangle validity

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 >= 0 && iSide2 >= 0 && iSide3 >= 0)
    {
        if((iSide1 + iSide2) > iSide3 && (iSide1 + iSide3) > iSide2 && (iSide2 + iSide3) > iSide1)
        {
            printf("Valid Triangle");
        }
        else
        {
            printf("Invalid Triangle");
        }
    }
    else
    {
        printf("Invalid ");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides : ");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    EXIT_SUCCESS;
}