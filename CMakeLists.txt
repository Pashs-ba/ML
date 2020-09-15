cmake_minimum_required(VERSION 3.14)
project(ML)

set(CMAKE_CXX_STANDARD 17)

add_executable(ML main.cpp Neuron.h Neuron.cpp and_data.h sum_nums_data.h)