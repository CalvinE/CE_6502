add_executable(test1 test1.cpp)

target_link_libraries(test1 LINK_PUBLIC CE_6502)

enable_testing()

add_test(Test1_test test1)