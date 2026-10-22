//  Identify character type

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cVal)
{
    if(cVal >= 'A' && cVal <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(cVal >= 'a' && cVal <= 'z')
    {
        printf("Lowercase Alphabet");
    }
    else if(cVal >= '0' && cVal <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter a character : ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    EXIT_SUCCESS;
}