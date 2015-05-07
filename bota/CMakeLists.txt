cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(BOTA CXX)

# Set custom cmake scripts directory
set( CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${LIBMONADIC_SOURCE_DIR}/cmake")

# Set include directories
include_directories( ${BOTA_SOURCE_DIR}/include )

file ( GLOB_RECURSE BOTA_CPP ./src/*.cc )
add_executable( bota ${BOTA_CPP} )

# Link libraries
target_link_libraries( bota ${DEPS} )
