file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    *.cpp
    *.hpp
)

add_library(display ${SRC_FILES})
target_link_libraries(display PUBLIC SDL3::SDL3)
target_include_directories(display INTERFACE ${CMAKE_CURRENT_LIST_DIR})
