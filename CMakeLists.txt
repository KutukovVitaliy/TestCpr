cmake_minimum_required(VERSION 3.20)
project(TestCpr)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(BUILD_CPR_TESTS OFF)
set(CMAKE_USE_OPENSSL OF)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG 67e12da316754ff3c6c91b50aafb2658438f3c1e) # the commit hash for 1.7.0
FetchContent_MakeAvailable(cpr)


add_executable(TestCpr main.cpp)
target_link_libraries(TestCpr PRIVATE cpr::cpr)
