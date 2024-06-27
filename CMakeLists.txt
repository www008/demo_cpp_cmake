cmake_minimum_required(VERSION 3.26)

project( demo_cpp_cmake CXX)

# 源程序
add_subdirectory(src bin)

# 测试用例
include(CTest)
add_subdirectory(test)

# 源码文档
find_path(DOXYGEN_PATH NAMES doxygen.exe HINTS "D:/Tool/doxygen" REQUIRED)
set(DOXYGEN_EXECUTABLE "${DOXYGEN_PATH}/doxygen.exe")
find_path(PLANTUML_JAR_PATH NAMES plantuml.jar HINTS "D:/Tool/doxygen" REQUIRED)
set(DOXYGEN_PLANTUML_JAR_PATH ${PLANTUML_JAR_PATH})
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Doxygen)
Doxygen(src docs)