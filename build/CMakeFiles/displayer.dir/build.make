# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = E:\Avania\caches\cmake\bin\cmake.exe

# The command to remove a file.
RM = E:\Avania\caches\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\git_codes\displayer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\git_codes\displayer\build

# Include any dependencies generated for this target.
include CMakeFiles/displayer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/displayer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/displayer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/displayer.dir/flags.make

CMakeFiles/displayer.dir/src/Displayer.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/Displayer.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/Displayer.cpp.obj: E:/git_codes/displayer/src/Displayer.cpp
CMakeFiles/displayer.dir/src/Displayer.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/displayer.dir/src/Displayer.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/Displayer.cpp.obj -MF CMakeFiles\displayer.dir\src\Displayer.cpp.obj.d -o CMakeFiles\displayer.dir\src\Displayer.cpp.obj -c E:\git_codes\displayer\src\Displayer.cpp

CMakeFiles/displayer.dir/src/Displayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/Displayer.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\Displayer.cpp > CMakeFiles\displayer.dir\src\Displayer.cpp.i

CMakeFiles/displayer.dir/src/Displayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/Displayer.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\Displayer.cpp -o CMakeFiles\displayer.dir\src\Displayer.cpp.s

CMakeFiles/displayer.dir/src/Handler.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/Handler.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/Handler.cpp.obj: E:/git_codes/displayer/src/Handler.cpp
CMakeFiles/displayer.dir/src/Handler.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/displayer.dir/src/Handler.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/Handler.cpp.obj -MF CMakeFiles\displayer.dir\src\Handler.cpp.obj.d -o CMakeFiles\displayer.dir\src\Handler.cpp.obj -c E:\git_codes\displayer\src\Handler.cpp

CMakeFiles/displayer.dir/src/Handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/Handler.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\Handler.cpp > CMakeFiles\displayer.dir\src\Handler.cpp.i

CMakeFiles/displayer.dir/src/Handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/Handler.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\Handler.cpp -o CMakeFiles\displayer.dir\src\Handler.cpp.s

CMakeFiles/displayer.dir/src/Mode.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/Mode.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/Mode.cpp.obj: E:/git_codes/displayer/src/Mode.cpp
CMakeFiles/displayer.dir/src/Mode.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/displayer.dir/src/Mode.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/Mode.cpp.obj -MF CMakeFiles\displayer.dir\src\Mode.cpp.obj.d -o CMakeFiles\displayer.dir\src\Mode.cpp.obj -c E:\git_codes\displayer\src\Mode.cpp

CMakeFiles/displayer.dir/src/Mode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/Mode.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\Mode.cpp > CMakeFiles\displayer.dir\src\Mode.cpp.i

CMakeFiles/displayer.dir/src/Mode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/Mode.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\Mode.cpp -o CMakeFiles\displayer.dir\src\Mode.cpp.s

CMakeFiles/displayer.dir/src/Play.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/Play.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/Play.cpp.obj: E:/git_codes/displayer/src/Play.cpp
CMakeFiles/displayer.dir/src/Play.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/displayer.dir/src/Play.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/Play.cpp.obj -MF CMakeFiles\displayer.dir\src\Play.cpp.obj.d -o CMakeFiles\displayer.dir\src\Play.cpp.obj -c E:\git_codes\displayer\src\Play.cpp

CMakeFiles/displayer.dir/src/Play.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/Play.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\Play.cpp > CMakeFiles\displayer.dir\src\Play.cpp.i

CMakeFiles/displayer.dir/src/Play.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/Play.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\Play.cpp -o CMakeFiles\displayer.dir\src\Play.cpp.s

CMakeFiles/displayer.dir/src/main.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/main.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/main.cpp.obj: E:/git_codes/displayer/src/main.cpp
CMakeFiles/displayer.dir/src/main.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/displayer.dir/src/main.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/main.cpp.obj -MF CMakeFiles\displayer.dir\src\main.cpp.obj.d -o CMakeFiles\displayer.dir\src\main.cpp.obj -c E:\git_codes\displayer\src\main.cpp

CMakeFiles/displayer.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/main.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\main.cpp > CMakeFiles\displayer.dir\src\main.cpp.i

CMakeFiles/displayer.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/main.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\main.cpp -o CMakeFiles\displayer.dir\src\main.cpp.s

CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.obj: E:/git_codes/displayer/src/songs/PopSongs.cpp
CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.obj -MF CMakeFiles\displayer.dir\src\songs\PopSongs.cpp.obj.d -o CMakeFiles\displayer.dir\src\songs\PopSongs.cpp.obj -c E:\git_codes\displayer\src\songs\PopSongs.cpp

CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\songs\PopSongs.cpp > CMakeFiles\displayer.dir\src\songs\PopSongs.cpp.i

CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\songs\PopSongs.cpp -o CMakeFiles\displayer.dir\src\songs\PopSongs.cpp.s

CMakeFiles/displayer.dir/src/songs/Song.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/songs/Song.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/songs/Song.cpp.obj: E:/git_codes/displayer/src/songs/Song.cpp
CMakeFiles/displayer.dir/src/songs/Song.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/displayer.dir/src/songs/Song.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/songs/Song.cpp.obj -MF CMakeFiles\displayer.dir\src\songs\Song.cpp.obj.d -o CMakeFiles\displayer.dir\src\songs\Song.cpp.obj -c E:\git_codes\displayer\src\songs\Song.cpp

CMakeFiles/displayer.dir/src/songs/Song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/songs/Song.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\songs\Song.cpp > CMakeFiles\displayer.dir\src\songs\Song.cpp.i

CMakeFiles/displayer.dir/src/songs/Song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/songs/Song.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\songs\Song.cpp -o CMakeFiles\displayer.dir\src\songs\Song.cpp.s

CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.obj: E:/git_codes/displayer/src/ui/DisplayUI.cpp
CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.obj -MF CMakeFiles\displayer.dir\src\ui\DisplayUI.cpp.obj.d -o CMakeFiles\displayer.dir\src\ui\DisplayUI.cpp.obj -c E:\git_codes\displayer\src\ui\DisplayUI.cpp

CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\ui\DisplayUI.cpp > CMakeFiles\displayer.dir\src\ui\DisplayUI.cpp.i

CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\ui\DisplayUI.cpp -o CMakeFiles\displayer.dir\src\ui\DisplayUI.cpp.s

CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.obj: E:/git_codes/displayer/src/download/DownloadURL.cpp
CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.obj -MF CMakeFiles\displayer.dir\src\download\DownloadURL.cpp.obj.d -o CMakeFiles\displayer.dir\src\download\DownloadURL.cpp.obj -c E:\git_codes\displayer\src\download\DownloadURL.cpp

CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\src\download\DownloadURL.cpp > CMakeFiles\displayer.dir\src\download\DownloadURL.cpp.i

CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\src\download\DownloadURL.cpp -o CMakeFiles\displayer.dir\src\download\DownloadURL.cpp.s

CMakeFiles/displayer.dir/test/src/TestPlay.cpp.obj: CMakeFiles/displayer.dir/flags.make
CMakeFiles/displayer.dir/test/src/TestPlay.cpp.obj: CMakeFiles/displayer.dir/includes_CXX.rsp
CMakeFiles/displayer.dir/test/src/TestPlay.cpp.obj: E:/git_codes/displayer/test/src/TestPlay.cpp
CMakeFiles/displayer.dir/test/src/TestPlay.cpp.obj: CMakeFiles/displayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/displayer.dir/test/src/TestPlay.cpp.obj"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/displayer.dir/test/src/TestPlay.cpp.obj -MF CMakeFiles\displayer.dir\test\src\TestPlay.cpp.obj.d -o CMakeFiles\displayer.dir\test\src\TestPlay.cpp.obj -c E:\git_codes\displayer\test\src\TestPlay.cpp

CMakeFiles/displayer.dir/test/src/TestPlay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/displayer.dir/test/src/TestPlay.cpp.i"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git_codes\displayer\test\src\TestPlay.cpp > CMakeFiles\displayer.dir\test\src\TestPlay.cpp.i

CMakeFiles/displayer.dir/test/src/TestPlay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/displayer.dir/test/src/TestPlay.cpp.s"
	E:\Avania\caches\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git_codes\displayer\test\src\TestPlay.cpp -o CMakeFiles\displayer.dir\test\src\TestPlay.cpp.s

# Object files for target displayer
displayer_OBJECTS = \
"CMakeFiles/displayer.dir/src/Displayer.cpp.obj" \
"CMakeFiles/displayer.dir/src/Handler.cpp.obj" \
"CMakeFiles/displayer.dir/src/Mode.cpp.obj" \
"CMakeFiles/displayer.dir/src/Play.cpp.obj" \
"CMakeFiles/displayer.dir/src/main.cpp.obj" \
"CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.obj" \
"CMakeFiles/displayer.dir/src/songs/Song.cpp.obj" \
"CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.obj" \
"CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.obj" \
"CMakeFiles/displayer.dir/test/src/TestPlay.cpp.obj"

# External object files for target displayer
displayer_EXTERNAL_OBJECTS =

displayer.exe: CMakeFiles/displayer.dir/src/Displayer.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/src/Handler.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/src/Mode.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/src/Play.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/src/main.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/src/songs/PopSongs.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/src/songs/Song.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/src/ui/DisplayUI.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/src/download/DownloadURL.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/test/src/TestPlay.cpp.obj
displayer.exe: CMakeFiles/displayer.dir/build.make
displayer.exe: CMakeFiles/displayer.dir/compiler_depend.ts
displayer.exe: CMakeFiles/displayer.dir/linkLibs.rsp
displayer.exe: CMakeFiles/displayer.dir/objects1.rsp
displayer.exe: CMakeFiles/displayer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\git_codes\displayer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable displayer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\displayer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/displayer.dir/build: displayer.exe
.PHONY : CMakeFiles/displayer.dir/build

CMakeFiles/displayer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\displayer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/displayer.dir/clean

CMakeFiles/displayer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git_codes\displayer E:\git_codes\displayer E:\git_codes\displayer\build E:\git_codes\displayer\build E:\git_codes\displayer\build\CMakeFiles\displayer.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/displayer.dir/depend

