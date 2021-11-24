#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "banking_operations.h"




   
int viewlist(int accno)
{
    FILE *view;
    view=fopen("record.dat","r");
    int test=0;
    system("cls");
    printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob->month,&add.dob->day,&add.dob->year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit->month,&add.deposit->day,&add.deposit->year)!=EOF)
       {
           return 1;
           test++;
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            return 0;
        }
}


