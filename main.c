#include <stdlib.h>
#include <stdio.h>
#include "accountdetails.h"
#include "Interest.h"
#include "balance.h"

void acc_open();

int main()
{

    int pin;
    int flag=0;
    int a;
    char username[45];
    char usernames[][45]={{"Vinay"},{"Akshath"},{"Susmitha"},{"krishna"},{"Anusha"},{"Teja"}};

    int pins[]={3456,7654,1807,2608,912,303};
    printf("Welcome to ABC Banking\n");
    printf("Enter your username\n");
    scanf("%s", &username);
    printf("Enter your pin\n");
    scanf("%d", &pin);

    for(int i=0;i<6;i++)
    {
        if((usernames[i]==username)&&(pins[i]==pin)) {
            flag=1;
        }

    }

    if(flag!=0) {
            printf("Invalid pin or username\n");
    } else {

        printf("Choose the below options to proceed further.\n 1. Savings Account Opening\n 2. Current Account Opening\n 3. Interest rate calculation\n 4. Check balance \n 5. Print Mini Statement\n 6. Withdrawl \n 7. Deposit. \n 8. Exit.\n");
        scanf("%d",&a);

        switch(a)
        {
            case 1: acc_open();
            break;
            case 2: acc_open();
            break;
            case 3: int_cal();
            break;
            case 4: chk_balance();
            break;
            case 5: mini_stat();
            break;
            case 6: withdrawal();
            break; 
            case 7: deposit();
            break;
            case 8: exit(0);
            break;
            default: printf("Invalid");
            main();
        }

    }

    return 0;

}
