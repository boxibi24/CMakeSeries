cmake_minimum_required(VERSION 3.5)
project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "The leading Hello World App"
        LANGUAGES CXX)
add_executable(HelloAppBinary "source/main.cpp" "source/dog.cpp")
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_SOURCE_DIR}/include)