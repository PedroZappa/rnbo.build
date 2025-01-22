cmake_minimum_required(VERSION 3.10)

# Set the C++ standard to at least C++11, which is needed for RNBO
set (CMAKE_CXX_STANDARD 11)


# Set the project name
project(RNBOCommandLine)


# Add the main executable as well as the RNBO sources
add_executable(RNBOCommandLine main.cpp zSubtractiveSynth.cpp rnbo/RNBO.cpp)


# Include the RNBO headers
target_include_directories(
  RNBOCommandLine 
    PRIVATE 
      rnbo rnbo/common
)
