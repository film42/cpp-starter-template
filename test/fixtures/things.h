#ifndef __FIXTURES_THINGS_H__
#define __FIXTURES_THINGS_H__

// GMOCK INCLUDES
#include "gtest/gtest.h"
#include "gmock/gmock.h"
// PROJECT INCLUDES
#include "some.h"

//
// GlOBAL FIXTURES
//
class ThingFixture : public ::testing::Test {
  virtual void SetUp() {

  }

  virtual void TearDown() {

  }
};

#endif // __FIXTURES_THINGS_H__
