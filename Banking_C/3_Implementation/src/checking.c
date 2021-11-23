#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "banking_operations.h"




int checking(int acc_no,char name[60])
{
    FILE *ptr;
    int test=0;
    ptr=fopen("record.dat","r");
    
    while (fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if(add.acc_no==check.acc_no)
        {   
            test=1;
            return 1;
        }
    }

    fclose(ptr);
        if(test!=1)
        {   
            return -1;
        }  
}


