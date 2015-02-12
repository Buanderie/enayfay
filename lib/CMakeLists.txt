project(LIBENAYFAY C CXX)

cmake_minimum_required(VERSION 2.8)

# Set include directories
include_directories( ${LIBENAYFAY_SOURCE_DIR}/include )

# Globbing source code
file ( GLOB_RECURSE LIBENAYFAY_CPP ./src/*.c* )

set( LIBENAYFAY_ALL_CPP ${LIBENAYFAY_CPP} )

if( ${ENAYFAY_CURRENT_SYSTEM} STREQUAL "WINDOWS" )
    add_library( enayfay ${LIBENAYFAY_ALL_CPP} )
else()
        add_library( enayfay SHARED ${LIBENAYFAY_ALL_CPP} )
endif()
