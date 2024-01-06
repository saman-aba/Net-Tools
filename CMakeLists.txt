cmake_minimum_required(VERSION 3.20)

set(CMAKE_BUILD_TYPE "Debug")

project(DNSParser)

enable_testing()
# include(ExternalProject)

# add_library(parser src/dns_parser.c)
add_executable(DNSParser
        src/main.c
        src/dns_parser.c
#        src/test/test.c
#        src/test/test_msg.c
#        src/test/test_driver.c
#        src/test/dns_parser_test.c
)

# add_test(NAME DNSParserTest)
 target_link_libraries(DNSParser PUBLIC wsock32 ws2_32)

# ExternalProject_Add(<name> 
#         PREFIX ${CMAKE_BINARY_DIR}/bin 
#         GIT_REPOSITORY <URL> 
#         GIT_TAG master 
#         CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/path)



