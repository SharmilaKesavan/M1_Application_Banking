
   
#include "banking_operations.h"
#include <stdio.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Banking operation requested by user*/
unsigned int banking_operation = 0;
int main_exit;

/* Operands on which calculation is performed */

/* Valid operations */
enum operations{ ADD, EXIT};

/* Display the menu of operations supported */
void menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main()
{
    char pass[10],password[10]="hello@123";
    int i=0;
    printf("\n\n\t\tEnter the password to login:");
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
        {printf("\n\nPassword Match!\nLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                system("cls");
            menu();
        }
    else
        {   printf("\n\nWrong password!!");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
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
                    {printf("\nInvalid!");
                     fordelay(100000000);
                    system("cls");
                    goto login_try;}

        }
        return 0;
}
            
int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
