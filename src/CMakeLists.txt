configure_file(CE_6502.h.in ${CMAKE_CURRENT_SOURCE_DIR}/CE_6502.h)

add_library(CE_6502 CE_6502.cpp)

target_include_directories(CE_6502 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})