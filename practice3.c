#include <stdio.h>

void deposit(float *balance);
void withdraw(float *balance);
void checkbalance(float balance);

    int main()
    {
        int choice;
        float balance=0.0;
        
        printf("\n\n---WELCOME TO SIMPLE BANKING SYSTEM---\n\n");
        
        do
        {
            printf("\n\n--MENU--\n\n");
            printf("1. Deposit money.\n");
            printf("2. withdraw money.\n");
            printf("3. checkbalance.\n");
            printf("4. Exit.\n");
            printf(" Enter your choice: ");
            scanf("%d",&choice);
            
           switch(choice)
           {
             case 1:
                 deposit(&balance);
                 break;

             case 2:
                 withdraw(&balance);
                 break;

             case 3:
                 checkbalance(balance);
                 break;

             case 4:
                 printf("\n Thankyou  for using our banking service.\n");
                 break;

             default:
                 printf("\n Invalid choice !! pleasr try again.\n");
           }
         }   
        
            while(choice!=4);
            return 0;
    }
      void deposit(float *balance)
      {
          float amount;
          printf("\n Enter amount you want to deposit:");
          scanf("%f",&amount);
          
          if(amount>0)
          {
              *balance+= amount;
              printf("\n Amount deposited successfully.\n");
          }else{
              printf("\nInvalid deposit amount.\n");
          }
      }
      void withdraw(float *balance)
      {
          float amount;
          printf("\n Enter amount you want to withdraw.\n");
          scanf("%f",&amount);
          
          if(amount>0 && amount<=*balance)
          {
              *balance-=amount;
              printf("\n Amount withdrawn successful.\n");
          }
          else
          {
              printf("\n Insufficient balance or Invalid input\n");
          }
      }
      void checkbalance(float balance)
      { 
          printf("\n Your current balance :%.2f",balance);
          
      }
    
