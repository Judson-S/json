add_executable(json_test "json_test.cpp" )

target_include_directories(json_test PRIVATE json)
target_link_libraries(json_test "gtest_main" "json")
