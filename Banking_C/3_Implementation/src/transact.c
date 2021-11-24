#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "banking_operations.h"


float interest(float t,float amount,int rate)
{
    float SI;
    SI=(rate*t*amount)/100.0;
    return (SI);

}

int transact(int accno, int amt)
{   int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");

    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob->month,&add.dob->day,&add.dob->year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit->month,&add.deposit->day,&add.deposit->year)!=EOF)
   {

            if(add.acc_no==transaction.acc_no)
            {   test=1;
                if(strcmpi(add.acc_type,"fixed1")==0||strcmpi(add.acc_type,"fixed2")==0||strcmpi(add.acc_type,"fixed3")==0)
                {
                   return 0;

                }
            }
            else
            {
               fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob->month,add.dob->day,add.dob->year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit->month,add.deposit->day,add.deposit->year);
               return 1;
            }
  }
   fclose(old);
   fclose(newrec);
   remove("record.dat");
   rename("new.dat","record.dat");
   if(add.amt<transaction.amt){
   return -1;
   }
}
