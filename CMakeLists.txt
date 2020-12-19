# CMakeList.txt : CMake project for libnao-ui, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("libnao-ui")

# Add source to this project's executable.
add_executable (libnao-ui "libnao-ui.cpp" "libnao-ui.h")

# TODO: Add tests and install targets if needed.
