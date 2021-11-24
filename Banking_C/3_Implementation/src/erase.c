#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "banking_operations.h"




int erase(int acc_no)
{
    FILE *old,*newrec;
    int test=0;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");
   
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob->month,&add.dob->day,&add.dob->year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit->month,&add.deposit->day,&add.deposit->year)!=EOF)
   {
        if(add.acc_no!=rem.acc_no)
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob->month,add.dob->day,add.dob->year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit->month,add.deposit->day,add.deposit->year);

        else
            {test++;
            return 1;
            }
   }
   fclose(old);
   fclose(newrec);
   remove("record.dat");
   rename("new.dat","record.dat");
   if(test==0)
   {
        return 0; 
   }

}

