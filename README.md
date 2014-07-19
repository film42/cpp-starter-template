C++ Starter Template
----------------------

This project is a basic template for getting started with C++ and Google Test. It also includes a `CMakeLists.txt` for generating a `Makefile`.

## Getting Started

Add anything you want to the `src` directory, and all tests will follow a matching name under the `test/src` directory. So if you were to create a `some.h` in `src`, then a test file could be placed in `test/src/some_test.cpp`.

To make this project template specific to your project, please rename the `PROJECT` name in `CMakeLists.txt` under the `test` directory to match your project name.

## Compiling

To compile and run the test suite, make sure you have the latest gmock (currently version 1.7.0) in the same directory as the project folder.

To install gmock, download it from google code, extract the latest zip, and inside run: `cmake .`, followed by `make`. It should succeed.

Now that gmock is built, `cd` into the `test` directory and run `cmake .`. *NOTE*: If cmake gives you the error: `Cannot determine link language`, then make sure you have a `cpp` file under the `src` directory.

Here's a full version of the error:

```
CMake Error: Cannot determine link language for target "change_my_name".
CMake Error: CMake can not determine linker language for target: change_my_name
```

Once the build succeeds, you can run the test suite by running `./change_my_name_tests` or whatever name you change the executable to.

The output should look like the following:

```
[==========] Running 2 tests from 2 test cases.
[----------] Global test environment set-up.
[----------] 1 test from SomeFixture
[ RUN      ] SomeFixture.can_return_hello_world
[       OK ] SomeFixture.can_return_hello_world (0 ms)
[----------] 1 test from SomeFixture (0 ms total)

[----------] 1 test from TestCanBeAnyName
[ RUN      ] TestCanBeAnyName.can_also_return_hello
[       OK ] TestCanBeAnyName.can_also_return_hello (0 ms)
[----------] 1 test from TestCanBeAnyName (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 2 test cases ran. (0 ms total)
[  PASSED  ] 2 tests.
```

## Fixtures

Google Test allows you to use fixtures for tests. A common fixture looks like this:

```c++
class ThingFixture : public ::testing::Test {
  virtual void SetUp() {

  }

  virtual void TearDown() {

  }
};
```

Since you can filter which tests cases you would like to run, and may want to reuse a fixture, you can use `tpedef` like this: `typedef ThingFixture SomeFixture` to namespace different tests; however, `TEST_F` is optional. If you would like to use any test name without a fixture, then `TEST` is available. Example of both have been included.

## License
None
