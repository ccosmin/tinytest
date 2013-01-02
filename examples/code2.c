#include "tinytest.h"
#include "code2.h"

unsigned long Addition(unsigned long x, unsigned long y)
{
  return x + y;
}

unsigned long Substraction(unsigned long x, unsigned long y)
{
  return x - y;
}

int TestAddition()
{
  TINYTEST_EQUAL(5, Addition(2, 3));
}

int TestSubstraction()
{
  TINYTEST_EQUAL(1, Substraction(3, 2));
}

TINYTEST_START_SUITE(Code2);
  TINYTEST_ADD_TEST(TestAddition);
  TINYTEST_ADD_TEST(TestSubstraction);
TINYTEST_END_SUITE();

