# CMakeList.txt : CMake project for file-cpp, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (file-cpp "file-cpp.cpp" "file.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET file-cpp PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
