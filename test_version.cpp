#define BOOST_TEST_MODULE test_version

#include <gtest/gtest.h>

#include <boost/test/unit_test.hpp>

#include "lib.h"

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version) { BOOST_CHECK(version() != 100); }

BOOST_AUTO_TEST_SUITE_END()

TEST(TestVesrion, TestVesrion) { ASSERT_LT(version(), 100); }