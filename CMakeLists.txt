cmake_minimum_required(VERSION 3.6)
project(Trie)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Trie.cpp Trie.h)
add_executable(Trie ${SOURCE_FILES})