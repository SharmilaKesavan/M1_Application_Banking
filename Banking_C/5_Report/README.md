# Report for Banking Management System

# M1_Application_Banking


## Code Analysis


CppCheck


[![CI](https://github.com/SharmilaKesavan/M1_Application_Banking/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/SharmilaKesavan/M1_Application_Banking/actions/workflows/cppcheck.yml)

UnitTesting


[![CI](https://github.com/SharmilaKesavan/M1_Application_Banking/actions/workflows/unit_testing.yml/badge.svg)](https://github.com/SharmilaKesavan/M1_Application_Banking/actions/workflows/unit_testing.yml)


## Build

Linux OS Build


[![Linux C/C++ CI](https://github.com/SharmilaKesavan/M1_Application_Banking/actions/workflows/Linux_c-cpp.yml/badge.svg)](https://github.com/SharmilaKesavan/M1_Application_Banking/actions/workflows/Linux_c-cpp.yml)


Windows OS Build


[![Windows C/C++ CI](https://github.com/SharmilaKesavan/M1_Application_Banking/actions/workflows/windows_c-cpp.yml/badge.svg)](https://github.com/SharmilaKesavan/M1_Application_Banking/actions/workflows/windows_c-cpp.yml)

## Code Quality


CodeInspector - Codiga


[![Code Score](https://api.codiga.io/project/29850/score/svg)](https://www.codiga.io)

CodeInspector - Codiga Grade

[![Code Grade](https://api.codiga.io/project/29850/status/svg)](https://www.codiga.io)



## Aim

- The bank management system is an application for maintaining a person’s account in a bank .
- To develop a software for solving financial applications of a customer in banking environment in order to nurture.
- The bank management system is an application for maintaining a person’s account in a bank .
- The bank management system is an application for maintaining a person’s account in a bank .


### Process

##### Understand the Customer Journey:
- Documenting customer touch points during processes such as account opening, loan origination and fraud reporting can help the bank improve customer experience based on specific data and anecdotes.

##### Identify Automation Candidates:
- Detailed flow chart documentation for high volume transactional processes such as loan application data entry, billing and wire processing can help identify specific steps that can benefit from automation. Flow charts, if created properly, will also capture the keystroke-level detail required to automate the work at scale.

##### Improve Compliance & Reduce Risk:
- Human error in processes such as know your customer (KYC) and credit review cause more than re-work – they can expose the bank to regulatory and financial risk. Documenting error root causes and removing needless variation from these processes can help standardize the work and mitigate possible risk.

# Requirements

## Introduction

To develop a project for solving financial applications of a customer in banking environment in order to nurture the needs of  an end banking user by providing various ways to perform banking tasks. Also to  enable  the  user’s  workspace  to  have  additional functionalities  which  are  not  provided under a conventional banking project.  The  Bank  Account  Management  System  undertaken  as  a  project  is  based  on  relevant technologies.  The  main  aim  of  this  project  is  to  develop  software  for  Bank  Account Management System. This project has been developed to carry out the processes easily and quickly,  which  is  not  possible  with  the  manuals  systems,  which  are  overcome  by  this software.  This  project  is  developed  using  C programming with Makefiles.

 The  system  is designed as an interactive and content management system. The content management system deals with data entry, validation confirm and updating whiles the interactive system deals with system interaction with the administration and users.
 
 ## Features  
 
  - User registration for online banking if not register.
  
  - Adding Beneficiary account by customer.
  
  - Transferring amount to the local customer account number. 
  
  - Admin must approve the user account activation before it can be used and transferring funds, view statement history. *Customer gets to know his last login date and time each   time he logs in. 
  
  - Customer can check all transactions made with their account. 
  
  - Customer can check their account statement within a date range. 
  
  - Customer can request for ATM and Cheque Book. 
  
  - Admin can add/edit/delete customer account’s 
  
  - All two of them (customer & admin) can change their password. 
  
  - Admin Login pages are hidden from customer for security purpose. 
  
  - Passwords are stored as encrypted 
  
  ### Advantages
 
  #### Customer Satisfaction: 
 
    - Client  can do  his  operations  comfortably  without  any  risk  or  losing  of  his privacy. 
Our software will perform and fulfill all the tasks that any customer would desire. 
    
 #### Saving Customer Time:
 
    - Client doesn't need to go to the bank to do small operation.
    
 #### Protecting The Customer:
 
    - It  helps  the  customer  to  be  satisfied  and  comfortable  in  his  choices,  this protection contains customer’s account, money and his privacy. 
    
 #### Transferring Money:
 
    - Help client transferring money to/or another bank or country.
    

## State of Art

![Evolution of Banking](https://howbankswork.com/wp-content/uploads/2013/02/fig6-4.jpg)

## 4W and 1H


#### What
    - The bank management system is an application for maintaining a person’s account in a bank.
#### Why
    - To  design an application, which could store bank data and provide an interface for retrieving customer related details with 100% accuracy. This bank management system also allow user to add new customer account, delete account and user can also modify existing user account information 
#### Where
    - This application can be implement in local branches of a Bank.
#### How
    - Banking System is an application that will take input from user such as customer details and account details and then it will do all the transactions internally that are required and generate an records of customer name and total amount.

## SWOT Analysis

#### Strengths

- Saves Time
-  Digital banking convenience
- Increases the economic growth
- Feature to add or update data of the Customer

#### Weaknesses
- Cannot came back, once forward to next step
Opportunities
- Can be implemented in any type of bank accounts
- Expansion of bank accounts to all mobile users
#### Threats
- Other Similar Applications
- Stability of the System




    
#### High level requirements

| **Test ID** | **Description**                                              | **Status(Implemented/Future** |    
|-------------|--------------------------------------------------------------|-------------------------------|
|  H_01       |Funds transaction                                             |  Implemented                  |
|  H_02       |Withdraw the Amount                                           |  Implemented                  |
|  H_02       |Funds Transfer                                                |  Future                       |
|  H_03       |Loan                                                          |  Future                       |



#### Low level requirements

| **Test ID** | **Description**                                              | **Status(Implemented/Future** |    
|-------------|--------------------------------------------------------------|-------------------------------|
|  L_01_H_01  |Checking valid or invalid users                               |  Implemented                  |
|  L_02_H_02  |Account details to be provided                                |  Implemented                  |
|  L_01_H_02  |Checking user valid or not                                    |  Implemented                  |
|  L_02_H_02  |Checking the Balance                                          |  Implemented                  |
|  L_01_H_03  |Apply Loan                                                    |  Future                       |


# Design


| **Folders**          | **Description**                     |    
|----------------------|-------------------------------------|
|  Structure Diagrams  |Contains Block diagram images        |
|  Behaviour Diagrams  |Contains Activity diagram images     |


# BehaviourDiagrams

- This includes all the activity diagrams, flowcharts, usecase diagrams of the banking management systems

![Behaviour diagram1](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/2_Architecture/BehaviorDiagrams/behavior_diag.drawio.png)

![Bhaviour diagram2](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/2_Architecture/BehaviorDiagrams/behavior_diag1.drawio.png)

# Structural Diagrams

- This includes the class diagram and component diagram and block diagram of the banking management system

 
 ![Structural diagram1](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/2_Architecture/StructureDiagrams/struct_diag.drawio.png)
 
 ![Structural diagram2](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/2_Architecture/StructureDiagrams/struct_diag1.drawio.png)
 
![Structural diagram3](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/2_Architecture/StructureDiagrams/struct_diag2.drawio.png)

# Implementation


# Introduction


- This folder conatins all the coding files as well as the resources and testing files neede for proper execution of program

## Instructions to execute
    

### Setup to Run
 
- An integrated development environment (Suggesting Visual Studio Code).
- GCC compiler to compile the project.
- "make" to run the Makefile smoothly.


### Steps To run Project

- First clone the repository from the Github.
- Open the repository in an IDE (Suggesting Visual Studio Code).
- The next step is to build the project with the help of make command :
         make all
- Next step  is to run the project with help of make command :
         make run
- If you want to run the test cases then run the following command :
         make test
- Clean all executable files by the following command :
         make clean

| **Folders** | **Description**                                              |    
|-------------|--------------------------------------------------------------|
|  inc        |Contains header files                                         |
|  src        |Contains C source files                                       |
|  test       |Contains test files                                           | 
|  unity      |Contains unit test files                                      | 


# TestPlan and Output


## Table no: High level test plan


| **Test ID** | **Description**                                              | **Exp I/P**            | **Exp O/P**    | **Actual Out**  |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------------------|----------------|-----------------|------------------|
|  H_01       |Creating new Accounts                                         |  name,address,phoneno  |Account no      |Account no       |Requirement based |
|  H_02       |Transactions on the Account by withdraw money, pin change     | Amount to be withdraw  |Balance         |Available Balance|Scenario based    |
|  H_02       |Withdraw Amount Exceeded the Balance                          |Accountno               |-1(Insufficient)|Available Balance|Boundary based    |


## Table no: Low level test plan


| **Test ID** | **Description**                                              | **Exp I/P**           | **Exp O/P**    | **Actual Out**        |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-----------------------|----------------|-----------------------|------------------|
|  L_01       |View the customer details with invalid account number         |name,address,phoneno   |0(Invalid user) |Invalid Account        |Requirement based |
|  L_02       |Edit the account details of the Customer                      |name,updaddress,phoneno|1(Updated)      |Account details changed|Scenario based    |
|  L_02       |Deleting or Closing an account details                        |accountno              |1(Deleted)      |Closing the account    |Boundary based    |


# Images And Videos

- The output and the explanation of the implementation are in images and videos for reference.


![Image reference1](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/6_ImagesAndVideos/banking.jpg)

![Image reference2](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/6_ImagesAndVideos/bank1.jpg)


![Image reference3](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/6_ImagesAndVideos/bank2.jpg)

![Image reference4](https://github.com/SharmilaKesavan/M1_Application_Banking/blob/main/Banking_C/6_ImagesAndVideos/Banking.out.out)











