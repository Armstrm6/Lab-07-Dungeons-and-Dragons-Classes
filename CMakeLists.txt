cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_library (applibrary Elves.cpp Dwarves.cpp Humans.cpp Halflings.cpp IRace.cpp ICharacter.cpp PartyForming.cpp CharacterFactory.cpp)

add_executable(runMain PartyAttack.cpp)
target_link_libraries(runMain applibrary)

