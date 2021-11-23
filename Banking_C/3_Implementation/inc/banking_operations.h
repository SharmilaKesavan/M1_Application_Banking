
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
 * @return It doesn't return anything
 * 
 */
int newacc();
/**
 * @brief Function to view the list of users
 * 
 * @return It doesn't return anything
 * 
 */

void viewlist();
/**
 * @brief Function to update the info of the user
 * 
 * @return It doesn't return anything
 * 
 */

void edit(void);
/**
 * @brief Function to do transaction on account
 * 
 * @return It doesn't return anything
 * 
 */

void transact(void);
/**
 * @brief Function to close the account
 * 
 * @return It doesn't return anything
 * 
 */

void erase(void);
/**
 * @brief Function to view the details of the account
 * 
 * @return It doesn't return anything
 * 
 */

void see(void);
/**
 * @brief Function to closes the program
 * 
 * @return It doesn't return anything
 * 
 */

void close(void);
/**
 * @brief Function to get the choice of the user transaction
 * 
 * @return It doesn't return anything
 * 
 */

void menu(void);


#endif //__BANK_H__