
include_directories( ${KRAKENAPI_SOURCE_DIR} )
add_executable( bota main.cpp )
add_dependencies( bota kapi )
target_link_libraries( bota kapi )
