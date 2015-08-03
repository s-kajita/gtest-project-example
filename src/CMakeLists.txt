#-------------------
# set common include folder for module
#-------------------
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/src)

#-------------------
# Module source
#-------------------
set(PROJECT_LIB_NAME ${PROJECT_NAME_STR}_impl)

file(GLOB SRC_FILES "*.cpp")
add_library(${PROJECT_LIB_NAME} ${SRC_FILES})
add_executable(cpp_sort_impl cpp_sort_impl.cpp)

#-------------------
# Test
#-------------------
if(${BUILD_GOOGLE_TEST} MATCHES "ON")
  set(TEST_NAME src_test)
  include_directories(${GTEST_INCLUDE_DIRS} ${COMMON_INCLUDES})

  file(GLOB TEST_SRC_FILES test/*.cpp)
  add_executable(${TEST_NAME} ${TEST_SRC_FILES})
  add_dependencies(${TEST_NAME} googletest)

  target_link_libraries(${TEST_NAME}
    ${GTEST_LIBS_DIR}/libgtest.a
    ${GTEST_LIBS_DIR}/libgtest_main.a
    )

  target_link_libraries(${TEST_NAME} ${CMAKE_THREAD_LIBS_INIT})

  add_test(src_test ${TEST_NAME})
endif()