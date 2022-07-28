#include<stdio.h>
#include<stdlib.h>
#include "accountdetails.c"
//#define balance 500

float balance=500;
char accounttype[][]={{"Savings"}};

void chk_balance()
{
    printf("%.2f",balance);
}
float with_amount;
void withdrawal()
{
    //float with_amount;
    printf("Enter the Witdraw Amount");
    scanf("%f",&with_amount);
    if(with_amount>balance)
    {
       printf("Balance not enough for withdrawal");
    }
    else
    {
    if(acc_typeptr==accounttype[0])
    {

    printf("Current account has cheque facility and withdrawal is not possible");
    }
    printf("Your withdrawal is successfully completed. Your new balance is %.2f",balance-with_amount);
    //rec_transaction(with_amount,balance);
    }
    //main();

}
float deposit_amount;
void deposit()
{
    //float deposit_amount;
    printf("Enter the Deposit Amount");
    scanf("%f",&deposit_amount);
    printf("Your deposit is successful and the new balance is %.2f",balance+deposit_amount);
}

void mini_stat()
{
    printf("Ministatement:\n");
    time_t t = time(NULL);
        printf("Current Date & Time %s\n", ctime(&t));
    printf("Date / Remarks             Amount\n");
    printf("_______________________________________\n");
    printf(" 06 Feb 2019            XXXX.xx(Dr)\n");
    printf(" To Transfer \n");
    printf("_______________________________________\n");
    printf(" 09 April 2019            XXXX.xx(Dr)\n");
    printf(" To Debit SMS charge\n");
    printf("_______________________________________\n");
    printf(" 18 July 2019            XXXX.xx(Dr)\n");
    printf(" To Credit Interest \n");
    printf("_______________________________________\n");
    printf(" 26 August 2019            XXXX.xx(Dr)\n");
    printf(" By Debit card \n");
    printf("_______________________________________\n");
    printf(" 09 December 2019        XXXX.xx(Dr)\n");
    printf(" By Debit card \n");

}
