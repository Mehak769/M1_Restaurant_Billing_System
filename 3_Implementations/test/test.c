#include"inc\billing.h"
#include"unity\unity.h"
void test_billing();
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_billing);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_searchrecords(void)
{
    char name[20]="Mehak";
    TEST_ASSERT_EQUAL("Mehak", name);
   
}