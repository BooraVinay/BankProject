#include <stdio.h>
#include <stdlib.h>



char acc_type[2][10];
extern float savingsMinBalance;
extern float currentMinBalance;


void chk_balance()
{
    int a;
    printf("Choose the type of Account\n 1.SavingsAccount\n 2.CurrentAccount\n");
    scanf("%d",&a);
    switch(a){
    case 1:
    printf("Your Savings Account Balance %.2f  \n",savingsMinBalance);
    break;
    case 2:
    printf("Your Current Account Balance %.2f  \n",currentMinBalance);
    break;
    }
}

float with_amount;

void withdrawal()
{


    int a;
    printf("Choose the type of Account\n 1.SavingsAccount\n 2.CurrentAccount\n");
    scanf("%d",&a);
    switch(a){
    case 1:
                printf("Enter the Witdraw Amount\n");
                scanf("%f",&with_amount);
                if(with_amount>savingsMinBalance)
                {
                printf("Insufficient Balance!!!\n");
                }
                else
                {
                
                printf("Your withdrawal is successfully completed. Your new balance is %.2f \n",savingsMinBalance-with_amount);
                
                }

            
            break;
    case 2:
                printf("Withdrawl facility is not possible for current account");
                break;
                
            }

}

float deposit_amount;

void deposit()
{
    int a;
    printf("Choose the type of Account\n 1.SavingsAccount\n 2.CurrentAccount\n");
    scanf("%d",&a);
    switch(a){
    case 1:
    printf("Enter the Deposit Amount");
    scanf("%f",&deposit_amount);
    printf("Your deposit is successful and your new Savings Account balance is %.2f \n",savingsMinBalance+deposit_amount);
    break;
    case 2:
    printf("Enter the Deposit Amount");
    scanf("%f",&deposit_amount);
    printf("Your deposit is successful and your new Savings Account balance is %.2f \n",currentMinBalance+deposit_amount);
    break;
}
}
void mini_stat()
{

    printf("Ministatement:\n");
    time_t t = time(NULL);

    printf("Current Date & Time %s\n", ctime(&t));
    printf("Date / Remarks             Amount\n");
    printf("_______________________________________\n");
    printf(" 06 Feb 2019            5000.00\n");
    printf(" To Transfer \n");
    printf("_______________________________________\n");
    printf(" 09 April 2019            1000.00\n");
    printf(" To Debit SMS charge\n");
    printf("_______________________________________\n");
    printf(" 18 July 2019            6000.00\n");
    printf(" To Credit Interest \n");
    printf("_______________________________________\n");
    printf(" 26 August 2019            8000.00\n");
    printf(" By Debit card \n");
    printf("_______________________________________\n");
    printf(" 09 December 2019        4000.00\n");
    printf(" By Debit card \n");

}
