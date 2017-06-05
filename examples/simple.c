#include <stdlib.h>
#include <stdio.h>

#include "tinytest.h"


int        tinytest_setup(const char *pName)
{
    fprintf( stderr, "tinytest_setup(%s)\n", pName);
    return 0;
}



int        tinytest_teardown(const char *pName)
{
    fprintf( stderr, "tinytest_teardown(%s)\n", pName);
    return 0;
}









int t1(const char *pName)
{
  int* p = NULL;
  TINYTEST_ASSERT(!p);
  TINYTEST_ASSERT(!printf(""));
  return 1; // Always return a value different than 0 at test end.
}


int t2(const char *pName)
{
  int* x = (int*)malloc(sizeof(int));
  TINYTEST_ASSERT(x);
  free(x);
  return 1; // Always return a value different than 0 at test end.
}


TINYTEST_START_SUITE(SimpleSuite);
  TINYTEST_ADD_TEST(t1,tinytest_setup,tinytest_teardown);
  TINYTEST_ADD_TEST(t2,tinytest_setup,tinytest_teardown);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(SimpleSuite);

