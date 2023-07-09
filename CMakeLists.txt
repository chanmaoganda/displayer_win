cmake_minimum_required(VERSION 3.5.1)

include_directories(include)
include_directories(include/mode_state)
include_directories(include/songs)
include_directories(include/ui)
include_directories(include/download)

aux_source_directory(. SRC_CUR)
aux_source_directory(src SRC_SUB)
aux_source_directory(src/songs SRC_SUB)
aux_source_directory(src/ui SRC_SUB)
aux_source_directory(src/download SRC_DOWNLOAD)

project("AUDIO_PLAYER")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# set (CMAKE_CXX_COMPILER "E:\Avania\caches\mingw64\bin\gcc.exe")

set(EXTERNAL_DIR ${PROJECT_SOURCE_DIR}/external)
set(LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

add_executable(displayer ${SRC_SUB} ${SRC_DOWNLOAD})

target_link_libraries(displayer Winmm.lib)