project(aoc2019)

cmake_minimum_required(VERSION 2.8)

enable_testing()

####################################################
# Set the C++ Standard to be used (Default to C++11)
####################################################
set(CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED ON)

####################################################################
# Set Compiler flags
####################################################################
IF (CMAKE_CXX_COMPILER_ID MATCHES "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++${CXX_STANDARD}")
ELSEIF (MSVC)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
ENDIF()

include_directories("${CMAKE_SOURCE_DIR}/include")

find_program(CMAKE_CXX_CPPCHECK NAMES cppcheck)
if (CMAKE_CXX_CPPCHECK)
    list(
        APPEND CMAKE_CXX_CPPCHECK 
            "--enable=warning"
            "--inconclusive"
            "--force" 
            "--inline-suppr"
            "--suppressions-list=${CMAKE_SOURCE_DIR}/CppCheckSuppressions.txt"
    )
endif()


####################################################
# Add Unit Tests file names (without .cpp extension)
####################################################
list(APPEND UNIT_TESTS
    Day1
)

####################################################
# Create executable for each test
####################################################
foreach(TEST ${UNIT_TESTS})
    add_executable(${TEST} "${CMAKE_SOURCE_DIR}/test/${TEST}.cpp" "${CMAKE_SOURCE_DIR}/src/${TEST}.cpp")
    add_test(${TEST} ${TEST})

    list(APPEND SOURCE_FILES
        "${CMAKE_SOURCE_DIR}/src/${TEST}.cpp"
    )
endforeach()

add_executable("aoc2019" "${CMAKE_SOURCE_DIR}/src/Runner.cpp" ${SOURCE_FILES})