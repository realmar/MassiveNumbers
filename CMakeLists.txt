# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.18)
include(FetchContent)
project ("MassiveNumber")
FetchContent_Declare(
    avxutils
    GIT_REPOSITORY https://github.com/manuel5975p/cpp-avx-utils
    
)
FetchContent_MakeAvailable(avxutils)
# Include sub-projects.
add_subdirectory ("MassiveNumber")
