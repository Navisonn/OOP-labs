cmake_minimum_required(VERSION 3.14)
project(LabbProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Поиск GoogleTest
find_package(GTest REQUIRED)

# Основная библиотека с нашей функцией
add_library(number_lib src/number.cpp)
target_include_directories(number_lib PUBLIC src/)

# Основная программа
add_executable(main_app main.cpp)
target_link_libraries(main_app number_lib)
target_include_directories(main_app PRIVATE src/)

# Тесты
add_executable(run_tests tests/test_number.cpp)
target_link_libraries(run_tests number_lib GTest::gtest GTest::gtest_main)
target_include_directories(run_tests PRIVATE src/)

# Включение тестирования
enable_testing()
add_test(NAME LabbTests COMMAND run_tests)
