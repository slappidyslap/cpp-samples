cmake_minimum_required(VERSION 3.28)
project(CMakeSFMLProject LANGUAGES CXX)

# set the output directory for built objects.
# This makes sure that the dynamic library goes into the build directory automatically.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

# include(FetchContent)
# FetchContent_Declare(SFML
#     GIT_REPOSITORY https://github.com/SFML/SFML.git
#     GIT_TAG 3.0.2
#     GIT_SHALLOW ON
#     EXCLUDE_FROM_ALL
#     SYSTEM)
# FetchContent_MakeAvailable(SFML)

add_executable(main src/main.cpp)

target_compile_features(main PRIVATE cxx_std_17)

target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/external/include)

target_compile_definitions(main PRIVATE SFML_STATIC)
set(SFML_3_0_2_PATH ${CMAKE_CURRENT_SOURCE_DIR}/external/lib)
target_link_libraries(main PRIVATE
    ${SFML_3_0_2_PATH}/sfml-graphics-s-d.lib
    ${SFML_3_0_2_PATH}/sfml-window-s-d.lib
    ${SFML_3_0_2_PATH}/sfml-system-s-d.lib
    opengl32
    winmm
    gdi32
    ${SFML_3_0_2_PATH}/freetype.lib)