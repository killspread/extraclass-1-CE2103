project(Tests)
add_subdirectory(googletest-master)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run ListTests.cpp GraphTests.cpp ../Structures/LinkedList.h ../Structures/LinkedList.cpp ../Structures/Node.h ../Structures/Node.cpp)

target_link_libraries(Google_Tests_run gtest gtest_main)