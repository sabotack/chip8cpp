add_subdirectory(chip8)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE chip8 SDL3::SDL3)
