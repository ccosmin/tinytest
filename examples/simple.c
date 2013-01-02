#include <stdlib.h>
#include <stdio.h>

#include "tinytest.h"

int t1(void)
{
  int* p = NULL;
  TINYTEST_ASSERT(!p);
  TINYTEST_ASSERT(!printf(""));
  return 1; // Always return a value different than 0 at test end.
}

int t2(void)
{
  int* x = (int*)malloc(sizeof(int));
  TINYTEST_ASSERT(x);
  free(x);
  return 1; // Always return a value different than 0 at test end.
}

TINYTEST_START_SUITE(SimpleSuite);
  TINYTEST_ADD_TEST(t1);
  TINYTEST_ADD_TEST(t2);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(SimpleSuite);

