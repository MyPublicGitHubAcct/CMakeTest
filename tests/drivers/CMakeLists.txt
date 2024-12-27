## build the unit test executable.
#set(CURRENT_EXE_NAME drivers_tests)
#
#set(SOURCE_FILES test_lib.cpp)
#
#add_executable(${CURRENT_EXE_NAME} ${SOURCE_FILES})
#
#add_dependencies(${CURRENT_EXE_NAME} cpputest)
#target_include_directories(${CURRENT_EXE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src)
#target_link_libraries(${CURRENT_EXE_NAME} CppUTest CppUTestExt)
#
## add the test to the project to be run by ctest.
#add_test(pythagorean_test ${CURRENT_EXE_NAME})