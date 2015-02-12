cmake_minimum_required(VERSION 2.8)
project(LIBTSMODEL)

set (CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${LIBTSMODEL_SOURCE_DIR}/cmake")

include_directories(${LIBTSMODEL_SOURCE_DIR}/include)

# Global shit
file (GLOB_RECURSE LIBTSMODEL_FILES_CPP ${LIBTSMODEL_SOURCE_DIR}/src/*.c*)
add_library( tsmodel ${LIBTSMODEL_FILES_CPP} )

#target_link_libraries ( baliseencoder ${DEPS} ) 
