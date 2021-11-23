
   
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
enum operations{ ADD, EXIT};

/* Display the menu of operations supported */




/* Start of the application */
int main()
{
    char pass[10],password[10]="hello@123";
    int i=0, choice,acc;
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
            acc = newacc(add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.amt,add.acc_type);  
            if(0==acc){
                DEBUG_PRINT("Account no. already in use!");
            }
            DEBUG_PRINT("\nAccount created successfully!");
            break;
        case 2:edit();
        break;
        case 3:transact();
        break;
        case 4:see();
        break;
        case 5:erase();
        break;
        case 6:viewlist();
        break;
        case 7://close();
        break;

    }

        return 0;
}

            

