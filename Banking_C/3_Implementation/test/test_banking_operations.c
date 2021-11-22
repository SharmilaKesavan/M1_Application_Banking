
#include "unity.h"
#include <banking_operations.h>

/* Modify these two lines according to the project */
#include <banking_operations.h>
#define PROJECT_NAME    "Banking"

/* Prototypes for all the test functions */
float interest(float t,float amount,int rate);
void fordelay(int j);
void new_acc(void);
void view_list(void);
void edit(void);
void transact(void);
void erase(void);
void see(void);

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
  RUN_TEST(test_interest);
  RUN_TEST(test_fordelay);
  RUN_TEST(test_new_acc);
  RUN_TEST(test_view_list);
  RUN_TEST(test_edit);
  RUN_TEST(test_transact);
  RUN_TEST(test_erase);
  RUN_TEST(test_see);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_interest(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-30, add(-10, -20));
  TEST_ASSERT_EQUAL(10, add(-10, 20));
}
void test_add_testcase2(void) {

}
void test_fordelay(void) {
  TEST_ASSERT_EQUAL();

}

void test_newacc(void) {
  TEST_ASSERT_EQUAL();

}

void test_viewlist(void) {
  TEST_ASSERT_EQUAL();
  
}
void test_edit(void) {
  TEST_ASSERT_EQUAL();
}
void test_transact(void) {
  TEST_ASSERT_EQUAL();
}
void test_erase(void) {
  TEST_ASSERT_EQUAL();
}
void test_see(void) {
  TEST_ASSERT_EQUAL();
}

  
  
  
  
  

