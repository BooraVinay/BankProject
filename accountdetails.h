#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



    char first_name[45];
    char last_name[45];
    char username[50];
    char pin[40];
    long acc_no;
     char acc_type[2][10]={"Savings","Current"};
      float  savingsMinBalance=500;
      float currentMinBalance=1000;
    




int a;

 void acc_open()
{

    //details det;
    
    time_t t;

    srand((unsigned) time(&t));

    acc_no = rand() % 1000;

    printf("Enter your first name\n");
    scanf("%s", &first_name);
    printf("Enter your last name\n");
    scanf("%s", &last_name);
    printf("Enter your User name\n");
    scanf("%s", &username);
    printf("Enter your pin \n");
    scanf("%d", &pin);
    
    if(a==1){
        printf("Your Savings Account is successfully created!!!\n");
    }
    else{
        printf("Your Current Account is Successfully created!!!\n");
    }
    printf("Below are your Account Details!!!\n");
    printf("FirstName %s\n",first_name);
    printf("LastName %s\n",last_name);
    printf("Your Account Number %ld\n",acc_no);
    printf("your User Name %s\n",username);
    printf("your User Pin:%d \n",pin);

}
void choose(){
    

printf("Choose the type of Account\n 1.SavingsAccount\n 2.CurrentAccount\n");
scanf("%d",&a);
switch(a){
    case 1:

       acc_open();

       printf("Account type: %s\n",acc_type[0]);

       printf("Balance %.2f\n",savingsMinBalance);
       break;
   case 2:

       acc_open();

       printf("Account type: %s\n",acc_type[1]);

       printf("Balance %.2f\n",currentMinBalance);
       break;
}
}