cmake_minimum_required(VERSION 2.8.4)
project(PlainTextToHtmlATag)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp)

add_subdirectory(src)

add_executable(PlainTextToHtmlATag ${SOURCE_FILES})

target_link_libraries(PlainTextToHtmlATag plain_text_to_html_a_tag)
