#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern char *acc_typeptr;

typedef struct details 
{
    char first_name[45];
    char last_name[45];
    long acc_no;
    char acc_type[45];
    float balance;

} details;


void acc_open()
{

    details det;
    time_t t;

    srand((unsigned) time(&t));

    det.acc_no = rand() % 1000;

    printf("Enter your first name\n");
    scanf("%s", &det.first_name);
    printf("Enter your last name\n");
    scanf("%s", &det.last_name);
    printf("Enter your account type\n");
    scanf("%s", &acc_typeptr);
    det.balance = 500;

    printf("Your current balance is %f",det.balance);

}