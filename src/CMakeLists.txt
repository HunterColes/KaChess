cmake_minimum_required(VERSION 3.14)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED Core Gui Widgets)

add_subdirectory(Board)
add_subdirectory(Comms)
add_subdirectory(Engine)
add_subdirectory(Io)
add_subdirectory(Main)
add_subdirectory(Player)