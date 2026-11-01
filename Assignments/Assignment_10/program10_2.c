/*
2. Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834
*/

#include<stdio.h>
#include<stdlib.h>

double RectArea(float iNo1, float iNo2)
{
    double Area = 0.0;

    Area = iNo1 * iNo2;

    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle is : %f",dRet);

    return EXIT_SUCCESS;
}