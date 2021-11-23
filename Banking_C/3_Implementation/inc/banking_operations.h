
/**
 * @file calc.h
 * @author GEA
 * @brief String based calculator functions
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BANK_H__
#define __BANK_H__
#include "stdlib.h"
#include "windows.h"

typedef enum error_t
{
    SUCCESS, /**< Return code for success */
    NULL_PTR /**< Return code for NULL pointer arguments*/
} error_t;

//Structure to define personal details of the account holder
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

    }add,upd,check,rem,transaction;
    

//Structure to declare the date
struct date{
    int month,day,year;

    };
/**
 * @brief Function to find the Simple Interest
 * 
 * @param t,amount,rate input character whose type should be found
 * @return interest returns interest value based on the type of t, amount, rate
 * 
 */
float interest(float t,float amount,int rate);


/**
 * @brief Function to create a new account
 * 
 * @param accno account number, name name  of the account holder, month , day, year, age, address , citizenship, phone, acc_type, amt
 * 
 * 
 *  @return 1 or 0 specifies the success of account creation
 * 
 */
int newacc(int accno,char name[60],int month,int day,int year,int age,char address[60],char citizenship[15],double phone,char acc_type[10],float amt);

/**
 * @brief Function to view the list of users
 * 
 * @param acc_no account  number which is to be display
 * @return 1 or 0 specifies the success of account creation
 * 
 */
int viewlist(int acc_no);

/**
 * @brief Function to update the info of the user
 * 
 * @param acc_no account number, name name of the account holder, phone phonenumber
 * @return 1 or 0 specifies the success of account creation
 * 
 */
int edit(int acc_no, char name[60], int phone);
/**
 * @brief Function to do transaction on account
 * 
 * @param acc_no account number
 * @return 1 or 0 specifies the success of account creation
 *  
 */

int transact(int accno);
/**
 * @brief Function to close the account
 * 
 * @param acc_no account number
 * @return 1 or 0 specifies the success of account creation
 *  
 */

int erase(int acc_no);

/**
 * @brief Function to view the details of the account
 * 
 * @param acc_no account number, name name of the account holder
 * @return 1 or 0 specifies the success of account creation
 * 
 */
int checking(int acc_no, char name[60]);


#endif //__BANK_H__