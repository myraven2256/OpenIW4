set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_PCH ${CMAKE_SOURCE_DIR}/src/stdafx.hpp)

include_directories(
    .
)

add_definitions(
    /FI"stdafx.hpp"
)

add_compile_options(
    /MP # Enables parallel builds
    $<$<CONFIG:Debug>:/Zi> # Produces a separate PDB file that contains all the symbolic debugging information.
)

add_subdirectory(IW4)
add_subdirectory(goldberg_emulator)
