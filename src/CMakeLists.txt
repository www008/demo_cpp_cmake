

add_library(calc STATIC calc.cpp)
target_include_directories(calc PUBLIC .)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE calc)


