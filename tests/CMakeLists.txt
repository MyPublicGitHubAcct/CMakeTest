#include(FetchContent)
#FetchContent_Declare(
#        CppUTest
#        GIT_REPOSITORY https://github.com/cpputest/cpputest.git
#        GIT_TAG        master # or use release tag, eg. v4.0
#        # FIND_PACKAGE_ARGS # Recent CMake versions can integrate FetchContent with find_package
#        # https://cmake.org/cmake/help/latest/module/FetchContent.html#integrating-with-find-package
#)
#
## Either set CPPUTEST_PLATFORM to off and # provide a project-specific
## platform.cpp, assign # one of the provided platforms under
## src/Platforms/ # (as shown below), or let CppUTest
## select an appropriate default.
#set(CPPUTEST_PLATFORM Gcc STRING BOOL "Platform implementation")
#
#FetchContent_MakeAvailable(CppUTest)
#
#set(SRCS drivers/main.cpp drivers/test_lib.cpp)
#
#add_executable(trying_CppUtest ${SRCS})
#
#target_link_libraries(trying_CppUtest
#        PRIVATE
#        CppUTest::CppUTest
#        #or CppUTest::CppUTestExt
#)
#
## automatically discover CppUTest tests
#include(CppUTest)
#cpputest_discover_tests(trying_CppUtest)







# load and build cpputest/cppumock library.
#include(cpputest_external_proj.cmake)

# build the unit test(s).
#add_subdirectory(drivers)
