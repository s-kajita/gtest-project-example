#-------------------
# Test
#-------------------
if(${BUILD_GOOGLE_TEST} MATCHES "ON")
  set(TEST_NAME string_test)
  include_directories(${GTEST_INCLUDE_DIRS})

  file(GLOB TEST_SRC_FILES test/*.cpp)
  add_executable(${TEST_NAME} ${TEST_SRC_FILES})
  add_dependencies(${TEST_NAME} googletest)

  target_link_libraries(${TEST_NAME}
    ${GTEST_LIBS_DIR}/libgtest.a
    ${GTEST_LIBS_DIR}/libgtest_main.a
    )

  target_link_libraries(${TEST_NAME} ${CMAKE_THREAD_LIBS_INIT})

  add_test(string_test ${TEST_NAME})
endif()
