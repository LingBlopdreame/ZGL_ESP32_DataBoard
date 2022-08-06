file(GLOB_RECURSE MAIN_SRC
        "${CMAKE_SOURCE_DIR}/main/*.c"
        #        "${CMAKE_SOURCE_DIR}/bsp/*.c"
        )

set(INCLUDE_DIR_LIST
        "${CMAKE_SOURCE_DIR}/main"
        "${CMAKE_SOURCE_DIR}/main/GUI"
        #        "${CMAKE_SOURCE_DIR}/bsp"
        #        "${CMAKE_SOURCE_DIR}/bsp/dac_func"
        #        "${CMAKE_SOURCE_DIR}/bsp/adc_func"
        #        "${CMAKE_SOURCE_DIR}/bsp/uart_func"
        )

idf_component_register(
        SRCS            ${MAIN_SRC}
        INCLUDE_DIRS    ${INCLUDE_DIR_LIST}
)
