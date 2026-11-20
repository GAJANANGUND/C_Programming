//Write a program which accept string from user and display it in reverse order. (Note: Numbered as "3." due to a typo in the PDF).

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    if(str == NULL)
    {
        return;
    }

    // Move end pointer to the last character before '\0'
    while(*end != '\0')
    {
        end++;
    }
    end--;

    // Swap characters from start and end moving towards the center
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("%s\n", str);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}