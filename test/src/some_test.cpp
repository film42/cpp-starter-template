#include "things.h"

using namespace ::testing;

// Local typedefs for namespacing tests
typedef ThingFixture SomeFixture;

TEST_F(SomeFixture, can_return_hello_world) {

  Some some;

  // All assertions found here: https://code.google.com/p/googletest/wiki/Primer
  EXPECT_TRUE( some.hello() == "Hello, World!" );
  EXPECT_EQ( some.hello(), "Hello, World!" );

}

TEST(TestCanBeAnyName, can_also_return_hello) {
  Some some;

  EXPECT_TRUE( some.hello() == "Hello, World!" );
  EXPECT_EQ( some.hello(), "Hello, World!" );
}
