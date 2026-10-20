//  Check voting eligibility

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iNo)
{
    if(iNo >= 18)
    {
        printf("Eligible for Voting");
    }
    else if(iNo < 18 && iNo >= 0)
    {
        printf("Not eligible for Voting");
    }
    else if(iNo < 0)
    {
        printf("Invalid Age");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}