add_executable(json_test "json_test.cpp" )

target_link_libraries(json_test PRIVATE "gtest_main" "json")
