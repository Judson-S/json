add_library(json STATIC "json.cpp" "json.hpp" "Boolean.cpp" "Boolean.hpp" "Number.cpp" "Number.hpp" "String.cpp" "String.hpp" "Array.cpp" "Array.hpp" "Object.cpp" "Object.hpp")

target_include_directories(json PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})