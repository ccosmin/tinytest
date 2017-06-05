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

int TestAddition(const char *pName)
{
  TINYTEST_EQUAL(5, Addition(2, 3));
  return 1;
}

int TestSubstraction(const char *pName)
{
  TINYTEST_EQUAL(1, Substraction(3, 2));
  return 1;
}

TINYTEST_START_SUITE(Code2);
  TINYTEST_ADD_TEST(TestAddition,NULL,NULL);
  TINYTEST_ADD_TEST(TestSubstraction,NULL,NULL);
TINYTEST_END_SUITE();

