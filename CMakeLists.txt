cmake_minimum_required(VERSION 3.10)
SET(CMAKE_CXX_STANDARD 11)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
  CACHE STRING "Vcpkg toolchain file")

PROJECT(InfestationZ)

find_package(SFML COMPONENTS system window graphics audio REQUIRED)
find_package(GTest CONFIG REQUIRED)

file(GLOB SOURCE
    src/Algorithms/*.h
    src/Algorithms/*.cpp
    src/Camera/*.h
    src/Camera/*.cpp
    src/Collision/*.h
    src/Collision/*.cpp
    src/DaveStation/*.h
    src/DaveStation/*.cpp
    src/Entities/*.h
    src/Entities/*.cpp  
    src/gun_graphic/*.h
    src/gun_graphic/*.cpp  
    src/player/*.h
    src/player/*.cpp
    src/State/*.h
    src/State/*.cpp  
    src/TileMap/*.h
    src/TileMap/*.cpp 
    src/Utility/*.h
    src/Utility/*.cpp  
    src/weapon/*.h
    src/weapon/*.cpp  
    src/weapon/weapon_utility/*.h
    src/weapon/weapon_utility/*.cpp 
    src/ZombieGame/*.h
    src/ZombieGame/*.cpp          
    src/*.h
    src/*.cpp
)


ADD_EXECUTABLE(main ${SOURCE})

target_link_libraries(main PRIVATE sfml-system sfml-window sfml-graphics sfml-audio)

target_link_libraries(main PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)