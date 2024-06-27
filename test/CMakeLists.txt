include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories("${PROJECT_SOURCE_DIR}/src")
add_executable(test_calc
                test_calc.cpp)
target_link_libraries(test_calc PRIVATE calc gtest_main)
include(GoogleTest)
gtest_discover_tests(test_calc)

