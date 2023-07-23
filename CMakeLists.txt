cmake_minimum_required(VERSION 3.10)
project(BatteryManagementSystem)

set(CMAKE_CXX_STANDARD 11)

# Add the include directory to the project
include_directories(include)

# Add the source files to the project
add_executable(BatteryManagementSystem
        main.cpp
        src/BatteryManagementSystem.cpp
        src/BatteryModel.cpp
)
