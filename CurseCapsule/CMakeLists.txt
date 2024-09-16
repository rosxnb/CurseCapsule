set(${LIB_NAME}_HEADERS
    headers/CurseCapsule/definitions.hpp
    headers/CurseCapsule/hello.hpp
    headers/CurseCapsule/window.hpp
)

set(${LIB_NAME}_SOURCES
    src/hello.cpp
    src/window.cpp
)

add_library(
    ${LIB_NAME}
    ${${LIB_NAME}_HEADERS}
    ${${LIB_NAME}_SOURCES}
)

target_include_directories(${LIB_NAME} 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers
)

target_link_libraries(${LIB_NAME}
    PRIVATE ncurses
)
