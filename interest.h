#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct cp_int
{
    float principal;
    float rate;
    float time;
} interest;

void int_cal()
{
    interest intr;
    int ch;
    float compound;
    float simple;

    printf("Enter the Amount\n");
    scanf("%f",&intr.principal);
    printf("Enter the Rate\n");
    scanf("%f",&intr.rate);
    printf("Enter the Time\n");
    scanf("%f",&intr.time);

    printf("Choose the below options to proceed further.\n 1. Simple Intrest for Current Balance\n 2. Compound Intrest for Fixed Deposit \n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1: simple=(intr.principal*6*intr.rate)/100;
            printf("Simple Intrest %f", simple);
            break;
        case 2: compound=intr.principal*pow(1+intr.rate/100,intr.time)-intr.principal;
            printf("Compound Interest %f", compound);
            break;
        default: printf("Invalid");
    }

}

