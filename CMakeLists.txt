cmake_minimum_required(VERSION 3.5.1)

aux_source_directory(src SRC_SUB)
aux_source_directory(. SRC_CUR)
aux_source_directory(src/songs SRC_SUB)

project("AUDIO_PLAYER")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# set (CMAKE_CXX_COMPILER "E:\Avania\caches\mingw64\bin\gcc.exe")

# set external directory for linking to play audio files
set(EXTERNAL_DIR ${PROJECT_SOURCE_DIR}/external)


# this is to link libwinmm.a to play audio
link_libraries("${EXTERNAL_DIR}/libwinmm.a")
# this is the most vital one in this CMakeLists.txt, cause is linking 3rd libraries

# add_libraries()
# add a library means making your own library to use


include_directories(include)
include_directories(include/mode_state)
include_directories(include/songs)

add_executable(displayer ${SRC_SUB} ${SRC_CUR})
# target_link_libraries(${PROJECT} libwinmm.a)

# set(LIBRARY_OUTPUT_PATH ../lib)
# add_library(play SHARED ${SRC_SUB})


# 3rd linking directory cannot be found,
# TODO
