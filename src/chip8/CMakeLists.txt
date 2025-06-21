file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    *.cpp
    *.hpp
)

add_library(chip8 ${SRC_FILES})
target_link_libraries(chip8 PRIVATE display)
