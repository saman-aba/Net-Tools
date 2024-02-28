cmake_minimum_required(VERSION 3.20)

project(Test)

add_executable(hashtable_test ht_test.c)

target_include_directories(hashtable_test PRIVATE ../src)
