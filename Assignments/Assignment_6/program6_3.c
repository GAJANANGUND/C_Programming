//  Calculate shopping discount

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid purchase amount");
    }
    else if(fAmount >= 1000 && fAmount <= 5000)
    {
        fDiscount = 0.10;
    }
    else if(fAmount >= 5000)
    {
        fDiscount = 0.20;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount);

    printf("Payable Amount = %.2f",fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    EXIT_SUCCESS;
}