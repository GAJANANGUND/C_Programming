/*
1.Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224
*/

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fNo)
{
    double Area = 0.0;

    Area = 3.14 * fNo * fNo;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius of circle : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle : %f",dRet);

    return EXIT_SUCCESS;
}