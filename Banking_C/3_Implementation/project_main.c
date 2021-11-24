
   
#include "banking_operations.h"
#include <stdio.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)
#define DEBUG

#ifdef DEBUG
#define DEBUG_PRINT printf
#else
#define DEBUG_PRINT
#endif

/* Banking operation requested by user*/
unsigned int banking_operation = 0;
int main_exit;

/* Operands on which calculation is performed */

/* Valid operations */


/* Display the menu of operations supported */




/* Start of the application */
int main()
{
    char pass[10],password[10]="hello@123";
    int i=0, choice, acc, trans, view, time, rate, intrst, update,list;
    int delete;
    DEBUG_PRINT("\n\n\t\tEnter the password to login:");
    scanf("%s",pass);
    /*do
    {
    //if (pass[i]!=13&&pass[i]!=8)
        {
            printf("*");
            pass[i]=getch();
            i++;
        }
    }while (pass[i]!=13);
    pass[10]='\0';*/
    if (strcmp(pass,password)==0)
        {DEBUG_PRINT("\n\nPassword Match!\nLOADING");
        
                system("cls");
                DEBUG_PRINT("\n\n\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM");
                DEBUG_PRINT("\n\n\n\t\t\t WELCOME TO THE MAIN MENU");
                DEBUG_PRINT("\n\n\t\t1.Create new account\n\t\t2.Update information of existing account\n\t\t3.For transactions\n\t\t4.Check the details of existing account\n\t\t5.Removing existing account\n\t\t6.View customer's list\n\t\t7.Exit\n\n\n\n\n\t\t Enter your choice:");
                DEBUG_PRINT("%d",&choice);
                
        } 
    else
        {   DEBUG_PRINT("\n\nWrong password!!");
            login_try:
            DEBUG_PRINT("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                   // close();
                   }
            else
                    {DEBUG_PRINT("\nInvalid!");
                    system("cls");
                    goto login_try;}

        }
    switch(choice)
    {
        case 1:
            
            DEBUG_PRINT("\t\t\t ADD RECORD  ");
            DEBUG_PRINT("\n\n\nEnter today's date(mm/dd/yyyy):");
            scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
            DEBUG_PRINT("\nEnter the account number:");
            scanf("%d",&check.acc_no);
            
            add.acc_no=check.acc_no;
            DEBUG_PRINT("\nEnter the name:");
            scanf("%s",&add.name);
            DEBUG_PRINT("\nEnter the date of birth(mm/dd/yyyy):");
            scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
            DEBUG_PRINT("\nEnter the age:");
            scanf("%d",&add.age);
            DEBUG_PRINT("\nEnter the address:");
            scanf("%s",add.address);
            DEBUG_PRINT("\nEnter the citizenship number:");
            scanf("%s",add.citizenship);
            DEBUG_PRINT("\nEnter the phone number: ");
            scanf("%lf",&add.phone);
            DEBUG_PRINT("\nEnter the amount to deposit:$");
            scanf("%f",&add.amt);
            DEBUG_PRINT("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
            scanf("%s",&add.acc_type);
            acc = newacc(add.acc_no);  
            if(0==acc){
                DEBUG_PRINT("Account no. already in use!");
            }
            DEBUG_PRINT("\nAccount created successfully!");
            break;
        case 2:
            printf("\nEnter the account no. of the customer whose info you want to change:");
            scanf("%d",&upd.acc_no);
            update = edit(upd.acc_no,upd.address,upd.phone);
            if(1 == update){
                printf("\nWhich information do you want to change?\n1.Address\n2.Phone\n\nEnter your choice(1 for address and 2 for phone):");
                scanf("%d",&choice);
                system("cls");
                if(choice==1)
                {
                    printf("Enter the new address:\n");
                    scanf("%s",upd.address);
                    printf("Changes saved!");
                }
                else if(choice==2)
                {
                    printf("Enter the new phone number:");
                    scanf("%lf",&upd.phone);
                    printf("Changes saved!");
                }
            }
            else{
                 printf("\nRecord not found!!");
            
            }
            break;
        case 3:
            printf("Enter the account no. of the customer:");
            scanf("%d",&transaction.acc_no);
            trans = transact(transaction.acc_no,transaction.amt);
            if(0==trans){
                 printf("\n\nYOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
            }
            else if(-1== trans){
                 printf("\n\nRecord not found!!");

            }
            else{
                printf("\n\nDo you want to\n1.Deposit\n2.Withdraw?\n\nEnter your choice(1 for deposit and 2 for withdraw):");
                scanf("%d",&choice);
                if (choice==1)
                {
                    printf("Enter the amount you want to deposit:$ ");
                    scanf("%f",&transaction.amt);
                    add.amt+=transaction.amt;
                    printf("\n\nDeposited successfully!");
                }
                else
                {
                    printf("Enter the amount you want to withdraw:$ ");
                    scanf("%f",&transaction.amt);
                    add.amt-=transaction.amt;
                    printf("\n\nWithdrawn successfully!");
                }

            break;
        /*case 4:
            view = checking(add.acc_no,add.name);
            if(1==view)
            {
                printf("Do you want to check by\n1.Account no\n2.Name\nEnter your choice:");
                scanf("%d",&choice);
                if (choice==1)
                {   printf("Enter the account number:");
                    scanf("%d",&check.acc_no);
                    printf("\nAccount NO.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$ %.2f \nDate Of Deposit:%d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,
                    add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                    if(strcmpi(add.acc_type,"fixed1")==0)
                        {
                            time=1.0;
                            rate=9;
                            intrst=interest(time,add.amt,rate);
                            printf("\n\nYou will get $%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                    else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                    }
                    else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                    }
                    else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                     }
                    else if(strcmpi(add.acc_type,"current")==0)
                    {

                        printf("\n\nYou will get no interest");
                    }
                else if (choice==2)
                {   printf("Enter the name:");
                    scanf("%s",&check.name);
                    printf("\nAccount No.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$%.2f \nDate Of Deposit:%d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,
                    add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                    if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                    else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                    }
                    else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);
                    }
                    else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);
                    }
                    else if(strcmpi(add.acc_type,"current")==0)
                    {
                        printf("\n\nYou will get no interest\a\a");
                    }
                }
            }
            else{
                 printf("\nRecord not found!!");
            
            }
            break;*/
        case 5:
            printf("Enter the account no. of the customer you want to delete:");
            scanf("%d",&rem.acc_no);
            delete = erase(rem.acc_no);
            if(1==delete)
            {
                printf("\nRecord deleted successfully!\n");
            }
            else{
                 printf("\nRecord not found!!\a\a\a");
          
            }
            break;
        case 6:
            printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");
            list = viewlist(add.acc_no);
            if(1==list)
            {
                printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf",add.acc_no,add.name,add.address,add.phone);
          
            }
            else{
                printf("\nNO RECORDS!!\n");}

            }
            break;
        case 7:
            printf("\n\n\n\nThis C Mini Project is Banking Management System!");   
            break;

    }

        return 0;
}

            

