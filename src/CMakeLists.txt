set(CMAKE_C_STANDARD 99)

set(CURRENT_EXE_NAME cmake_example)
set(SOURCE_FILES main.c drivers/lib.c)

add_executable(${CURRENT_EXE_NAME} ${SOURCE_FILES})

# link against math library.
target_link_libraries(${CURRENT_EXE_NAME} m)
install(TARGETS ${CURRENT_EXE_NAME} DESTINATION bin)
