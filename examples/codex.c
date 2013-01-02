#include "tinytest.h"
#include "code1.h"
#include "code2.h"

TINYTEST_START_MAIN();
  TINYTEST_RUN_SUITE(Code1);
  TINYTEST_RUN_SUITE(Code2);
TINYTEST_END_MAIN();

