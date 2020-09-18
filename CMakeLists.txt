cmake_minimum_required(VERSION 3.17)
project(extraclass_1_CE2103)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/home/dani/Qt/5.15.1/gcc_64/")


find_package(Qt5Widgets REQUIRED)

#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTORCC ON)

add_executable(extraclass_1_CE2103 main.cpp)
target_link_libraries(extraclass_1_CE2103 Qt5::Widgets)
