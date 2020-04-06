cmake_minimum_required( VERSION 3.13 )
project( main.cpp LANGUAGES CXX )

add_subdirectory( ${CMAKE_CURRENT_LIST_DIR}/third_party/fmt EXCLUDE_FROM_ALL )

set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_EXTENSIONS OFF )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

set(
    CMAKE_CXX_FLAGS
    "${CMAKE_CXX_FLAGS} -Wall -Wextra \
    -Wold-style-cast -Wuseless-cast -Wnull-dereference \
    -Werror -Wfatal-errors -pedantic -pedantic-errors"
)

add_library(
    maincpp
    ${CMAKE_CURRENT_LIST_DIR}/src/maincpp/math.cpp
)
target_include_directories(
    maincpp PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/include
)

add_executable(
    main
    ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp
)
target_link_libraries( main PRIVATE maincpp fmt::fmt )

add_executable(
    test
    ${CMAKE_CURRENT_LIST_DIR}/test/test.cpp
    ${CMAKE_CURRENT_LIST_DIR}/test/maincpp/test_math.cpp
)
target_link_libraries( test PRIVATE maincpp )
target_include_directories(
    test PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/third_party/Catch2
)