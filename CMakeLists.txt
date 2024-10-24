﻿# CMakeList.txt : CMake project for RogueLike, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("RogueLike")

# Add source to this project's executable.
add_executable (RogueLike "src/RogueLike.cpp" "src/Game.cpp" "src/TextureManager.cpp" "src/Player.cpp" "src/GameObject.cpp" "src/Sprite.cpp")

# Ensure that the SDL2 package is installed
find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(RogueLike PRIVATE $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main> $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>)

# Ensure that the SDL2 package is installed
find_package(SDL2_image CONFIG REQUIRED)
target_link_libraries(RogueLike PRIVATE $<IF:$<TARGET_EXISTS:SDL2_image::SDL2_image>,SDL2_image::SDL2_image,SDL2_image::SDL2_image-static>)

# Ensure that the FMT package is installed
find_package(fmt CONFIG REQUIRED)
target_link_libraries(RogueLike PRIVATE fmt::fmt-header-only)


# Copy the assets folder to the build directory
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET RogueLike PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
