cmake_minimum_required(VERSION 3.20)
project(Aetherbound)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} 
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE /opt/homebrew/include)
target_link_directories(${PROJECT_NAME} PRIVATE /opt/homebrew/lib)
target_link_libraries(${PROJECT_NAME} raylib)
