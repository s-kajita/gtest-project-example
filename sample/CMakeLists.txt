#-------------------
# set common include folder for module
#-------------------
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/sample)

#-------------------
# Test
#-------------------
set(TEST_NAME sample_test)
include_directories(${GTEST_INCLUDE_DIRS} ${COMMON_INCLUDES})

file(GLOB TEST_SRC_FILES test/*.cpp)
add_executable(${TEST_NAME} ${TEST_SRC_FILES})
add_dependencies(${TEST_NAME} googletest)


if(NOT WIN32)
    target_link_libraries(${TEST_NAME}
        ${GTEST_LIBS_DIR}/libgtest.a
        ${GTEST_LIBS_DIR}/libgtest_main.a
        )
endif()

target_link_libraries(${TEST_NAME} ${CMAKE_THREAD_LIBS_INIT})

add_test(test2 ${TEST_NAME})
