project(Tests)
add_subdirectory(googletest-master)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run ListTests.cpp GraphTests.cpp)

# linking Google_Tests_run with Structures which will be tested
target_link_libraries(Google_Tests_run /Structures)

target_link_libraries(Google_Tests_run gtest gtest_main)