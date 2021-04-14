/**
 Unit Testing @pass
 PS D:\stepin\miniproject\miniProject_stepIn_260056\3_Implementation> make test
gcc src/loanFunctions.c test/test_loanCalculator.c unity/src/unity.c  -Iinc -Iunity  -o build/Test_loanCalculator.out
./build/Test_loanCalculator.out
test/test_loanCalculator.c:24:test_months:PASS
test/test_loanCalculator.c:25:test_monthlyRate:PASS
test/test_loanCalculator.c:26:test_everyMonthInstallment:PASS

-----------------------
3 Tests 0 Failures 0 Ignored
OK
 */

#include "../unity/src/unity.h"

/* Modify these two lines according to the project */
#include <loanFunctions.h>
#define PROJECT_NAME    "loanCalculator"

/* Prototypes for all the test functions */
void test_months(void);
void test_monthlyRate(void);
void test_everyMonthInstallment(void);

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
  RUN_TEST(test_months);
  RUN_TEST(test_monthlyRate);
  RUN_TEST(test_everyMonthInstallment);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_months(void) 
{
  int numPara1 = 2 , numPara2 = 5 ;
  TEST_ASSERT_EQUAL_INT(29, months(&numPara1, &numPara2));
  int numPara3 = 10 , numPara4 = 4;
  TEST_ASSERT_EQUAL_INT(124, months(&numPara3, &numPara4));
}

void test_monthlyRate(void) {
  float numPara6 = 5.5;
  TEST_ASSERT_EQUAL_FLOAT(0.004583333, monthlyRate(&numPara6));
  float numPara7 = 9.87;
  TEST_ASSERT_EQUAL_FLOAT(0.008225, monthlyRate(&numPara7));
}

void test_everyMonthInstallment(void) {
  float paraPrincipal = 5000;
  float paraInterest1 = 0.01;
  int paraMonths1 = 24;
  float paraInterest2 = 0.005;
  int paraMonths2 = 36;

  TEST_ASSERT_EQUAL_FLOAT(235.3674, everyMonthInstallment(&paraPrincipal, &paraInterest1, &paraMonths1 ));
  TEST_ASSERT_EQUAL_FLOAT(152.1097, everyMonthInstallment(&paraPrincipal, &paraInterest2, &paraMonths2));
}

