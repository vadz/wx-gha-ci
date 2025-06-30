cmake_minimum_required(VERSION 3.14)

project(wx_gha_ci VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(wxWidgets COMPONENTS core base REQUIRED)

add_executable(hello WIN32 hello.cpp)

# Include wxWidgets' use file if we don't use config mode.
if(wxWidgets_USE_FILE)
    include(${wxWidgets_USE_FILE})
endif()

target_link_libraries(hello PRIVATE ${wxWidgets_LIBRARIES})
