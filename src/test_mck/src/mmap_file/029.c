/* 029.c COPYRIGHT FUJITSU LIMITED 2015-2016 */
#include "test_mck.h"
#include "testsuite.h"

#define DELEGATE_NUMBER 0

SETUP_ALIAS(TEST_SUITE, TEST_NUMBER, DELEGATE_NUMBER)

RUN_ALIAS(TEST_SUITE, TEST_NUMBER, DELEGATE_NUMBER)

TEARDOWN_ALIAS(TEST_SUITE, TEST_NUMBER, DELEGATE_NUMBER)
