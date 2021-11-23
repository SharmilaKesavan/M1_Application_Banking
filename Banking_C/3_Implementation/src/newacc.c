#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "banking_operations.h"


int newacc(int accno,char name[60],int month,int day,int year,int age,char address[60],char citizenship[15],double phone,char acc_type[10],float amt)
{
    FILE *ptr;

    ptr=fopen("record.dat","a+");
    account_no:
    system("cls");
    
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
        { 
            return 0;
            goto account_no;

        }
    }
    add.acc_no=check.acc_no;
       
    fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
    fclose(ptr);
    add_invalid:
    system("cls");
    return NULL_PTR;
    goto add_invalid;
    
}
