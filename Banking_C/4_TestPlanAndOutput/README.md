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
