cmake_minimum_required(VERSION 3.5.1)

include_directories(include)
include_directories(include/mode_state)
include_directories(include/songs)
include_directories(include/ui)

aux_source_directory(. SRC_CUR)
aux_source_directory(src SRC_SUB)
aux_source_directory(src/songs SRC_SUB)
aux_source_directory(src/ui SRC_SUB)
aux_source_directory(src/download SRC_DOWNLOAD)

project("AUDIO_PLAYER")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# set (CMAKE_CXX_COMPILER "E:\Avania\caches\mingw64\bin\gcc.exe")

# set external directory for linking to play audio files
set(EXTERNAL_DIR ${PROJECT_SOURCE_DIR}/external)
set(LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

add_library(play SHARED ${SRC_SUB} ${SRC_DOWNLOAD})
add_library(download SHARED ${SRC_DOWNLOAD})


# this is to link libwinmm.a to play audio
link_libraries("${EXTERNAL_DIR}/libwinmm.a" "${LIB_DIR}/libplay.dll" "${LIB_DIR}/libdownload.dll")
# this is the most vital one in this CMakeLists.txt, cause is linking 3rd libraries

add_executable(displayer ${SRC_CUR})
# target_link_libraries(${PROJECT} libwinmm.a)

# set(LIBRARY_OUTPUT_PATH ../lib)


# 3rd linking directory cannot be found,
# TODO
