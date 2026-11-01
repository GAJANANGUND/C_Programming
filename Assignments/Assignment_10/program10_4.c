/*
4. Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)
*/

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dAns = 0.0;

    dAns = ((fTemp - 32.0) * (5.0 / 9.0));

    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter temperature : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit to celsius is : %f",dRet);

    return EXIT_SUCCESS;
}