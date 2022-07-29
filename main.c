#include <stdlib.h>
#include <stdio.h>
#include "accountdetails.h"
#include "interest.h"
#include "balance.h"


int main()
{

    int pin,a,n;
    char username[100];
    printf("Welcome to ABC Banking\n");
    printf("1.New User? Open Account\n 2.Existing User Login\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            choose();
            goto lab;
          break;
          case 2:
            printf("Enter your username\n");
            scanf("%s", &username);
            printf("Enter your pin\n");
            scanf("%d", &pin);
            char str[]="Vinay";


            if(strcmp(username,str) && pin==12345 ) {



            lab:  printf("Choose the below User operations to proceed further.\n 1. Interest rate calculation\n 2. Check balance \n 3. Print Mini Statement\n 4. Withdrawl \n 5. Deposit. \n 6. Exit.\n");
                scanf("%d",&a);

                switch(a)
                {
                
                    case 1: int_cal();
                    goto lab;
                    break;
                    case 2: chk_balance();
                    goto lab;
                    break;
                    case 3: mini_stat();
                    goto lab;
                    break;
                    case 4: withdrawal();
                    goto lab;
                    break; 
                    case 5: deposit();
                    goto lab;
                    break;
                    case 6: exit(0);

                    break;
                    default: printf("Invalid");
                    goto lab;
                }
                }
        
                else {

                            printf("Invalid pin or username\n");
                    }
            break;
            }
        return 0;
    }




