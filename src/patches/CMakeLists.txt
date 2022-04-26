file(GLOB_RECURSE patches RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

add_library(patches STATIC
    ${patches}
)

target_precompile_headers(patches
PRIVATE
    ${CMAKE_CXX_PCH}
)

target_create_vcxproj_filters(patches)
