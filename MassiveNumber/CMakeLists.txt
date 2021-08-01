# CMakeList.txt : CMake project for MassiveNumber, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.18)
set(CMAKE_CXX_STANDARD 17)
# Add source to this project's executable.
add_executable (MassiveNumber "main.cpp")
target_link_libraries(MassiveNumber PUBLIC cpp-avx)
target_compile_options(MassiveNumber PUBLIC "-march=native")

# TODO: Add tests and install targets if needed.
