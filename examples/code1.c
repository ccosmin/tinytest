#include "tinytest.h"
#include "code1.h"

unsigned long Factorial(unsigned long x)
{
  if ( x > 0 )
    return x * Factorial(x - 1);
  else
    return 1;
}

int TestFactorial()
{
  TINYTEST_EQUAL(1, Factorial(0));
  TINYTEST_EQUAL(6, Factorial(3));
}

TINYTEST_START_SUITE(Code1);
  TINYTEST_ADD_TEST(TestFactorial);
TINYTEST_END_SUITE();

