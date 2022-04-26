file(GLOB_RECURSE IW4 RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.h)

add_executable(IW4
    ${IW4}
)

target_precompile_headers(IW4
PRIVATE
    ${CMAKE_CXX_PCH}
)

target_create_vcxproj_filters(IW4)
