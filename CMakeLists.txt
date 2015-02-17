cmake_minimum_required(VERSION 2.8.4)
project(PlainTextToHtmlATag)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.cpp
    src/plain_text_to_html_a_tag.cpp)

add_executable(PlainTextToHtmlATag ${SOURCE_FILES})
