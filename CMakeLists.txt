cmake_minimum_required(VERSION 3.20)
project(Containers)

set(CMAKE_CXX_STANDARD 20)

add_executable(Containers main.cpp data.cpp data.h TimeLogger.cpp TimeLogger.h Experiments.h find.cpp sort.cpp pop_back.cpp pop_front.cpp push_back.cpp push_front.cpp)
add_executable(Generator generator.cpp)