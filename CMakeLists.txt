cmake_minimum_required(VERSION 3.10)
project(brients_solution)

set(CMAKE_C_STANDARD 17)

# 1. Include the headers folder so the code knows where .h files are
include_directories(headers)

# 2. Tell CLion to build 'main' using main.c AND the files in functions/
add_executable(main
        main.c
        functions/hash_functions.c
        functions/prime_functions.c
)