
#include "unity.h"
#include <banking_operations.h>

/* Modify these two lines according to the project */
#include <banking_operations.h>
#define PROJECT_NAME    "Banking"

/* Prototypes for all the test functions */
float interest(float t,float amount,int rate);
int newacc(int accno);
int viewlist(int acc_no);
int edit(int acc_no, char name[60], int phone);
int transact(int accno, int amt);
int erase(int acc_no);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  
  RUN_TEST(test_newacc);
  RUN_TEST(test_viewlist);
  RUN_TEST(test_edit);
  RUN_TEST(test_transact);
  RUN_TEST(test_erase);
 
   /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 

void test_newacc(void) {
  TEST_ASSERT_EQUAL(0, newacc(-12345678));

}

void test_viewlist(void) {
  TEST_ASSERT_EQUAL(0, viewlist(-12345678));
  
}
void test_edit(void) {
  TEST_ASSERT_EQUAL(1, edit(12345678,'gorimedu',2233445));
}
void test_transact(void) {
  TEST_ASSERT_EQUAL(-1, transact(12345678,500));
}
void test_erase(void) {
  TEST_ASSERT_EQUAL(0, erase(12345678));
}


  
  
  
  
  

