//Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iSmall = 0, iCap = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCap++;
        }
        str++;
    }

    iCnt = iSmall - iCap;
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}