# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\User\dev1\OpenGLPrj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\dev1\OpenGLPrj\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\OpenGLPrj.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\OpenGLPrj.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\OpenGLPrj.dir\flags.make

CMakeFiles\OpenGLPrj.dir\src\Box.cpp.obj: CMakeFiles\OpenGLPrj.dir\flags.make
CMakeFiles\OpenGLPrj.dir\src\Box.cpp.obj: ..\src\Box.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenGLPrj.dir/src/Box.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\OpenGLPrj.dir\src\Box.cpp.obj /FdCMakeFiles\OpenGLPrj.dir\ /FS -c C:\Users\User\dev1\OpenGLPrj\src\Box.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLPrj.dir/src/Box.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\OpenGLPrj.dir\src\Box.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\dev1\OpenGLPrj\src\Box.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLPrj.dir/src/Box.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\OpenGLPrj.dir\src\Box.cpp.s /c C:\Users\User\dev1\OpenGLPrj\src\Box.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Brick.cpp.obj: CMakeFiles\OpenGLPrj.dir\flags.make
CMakeFiles\OpenGLPrj.dir\src\Brick.cpp.obj: ..\src\Brick.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OpenGLPrj.dir/src/Brick.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\OpenGLPrj.dir\src\Brick.cpp.obj /FdCMakeFiles\OpenGLPrj.dir\ /FS -c C:\Users\User\dev1\OpenGLPrj\src\Brick.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Brick.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLPrj.dir/src/Brick.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\OpenGLPrj.dir\src\Brick.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\dev1\OpenGLPrj\src\Brick.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Brick.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLPrj.dir/src/Brick.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\OpenGLPrj.dir\src\Brick.cpp.s /c C:\Users\User\dev1\OpenGLPrj\src\Brick.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Camera.cpp.obj: CMakeFiles\OpenGLPrj.dir\flags.make
CMakeFiles\OpenGLPrj.dir\src\Camera.cpp.obj: ..\src\Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/OpenGLPrj.dir/src/Camera.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\OpenGLPrj.dir\src\Camera.cpp.obj /FdCMakeFiles\OpenGLPrj.dir\ /FS -c C:\Users\User\dev1\OpenGLPrj\src\Camera.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLPrj.dir/src/Camera.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\OpenGLPrj.dir\src\Camera.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\dev1\OpenGLPrj\src\Camera.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLPrj.dir/src/Camera.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\OpenGLPrj.dir\src\Camera.cpp.s /c C:\Users\User\dev1\OpenGLPrj\src\Camera.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Scene.cpp.obj: CMakeFiles\OpenGLPrj.dir\flags.make
CMakeFiles\OpenGLPrj.dir\src\Scene.cpp.obj: ..\src\Scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/OpenGLPrj.dir/src/Scene.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\OpenGLPrj.dir\src\Scene.cpp.obj /FdCMakeFiles\OpenGLPrj.dir\ /FS -c C:\Users\User\dev1\OpenGLPrj\src\Scene.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLPrj.dir/src/Scene.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\OpenGLPrj.dir\src\Scene.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\dev1\OpenGLPrj\src\Scene.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLPrj.dir/src/Scene.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\OpenGLPrj.dir\src\Scene.cpp.s /c C:\Users\User\dev1\OpenGLPrj\src\Scene.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Shader.cpp.obj: CMakeFiles\OpenGLPrj.dir\flags.make
CMakeFiles\OpenGLPrj.dir\src\Shader.cpp.obj: ..\src\Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/OpenGLPrj.dir/src/Shader.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\OpenGLPrj.dir\src\Shader.cpp.obj /FdCMakeFiles\OpenGLPrj.dir\ /FS -c C:\Users\User\dev1\OpenGLPrj\src\Shader.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLPrj.dir/src/Shader.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\OpenGLPrj.dir\src\Shader.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\dev1\OpenGLPrj\src\Shader.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLPrj.dir/src/Shader.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\OpenGLPrj.dir\src\Shader.cpp.s /c C:\Users\User\dev1\OpenGLPrj\src\Shader.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.obj: CMakeFiles\OpenGLPrj.dir\flags.make
CMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.obj: ..\src\Treasure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/OpenGLPrj.dir/src/Treasure.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.obj /FdCMakeFiles\OpenGLPrj.dir\ /FS -c C:\Users\User\dev1\OpenGLPrj\src\Treasure.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLPrj.dir/src/Treasure.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\dev1\OpenGLPrj\src\Treasure.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLPrj.dir/src/Treasure.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.s /c C:\Users\User\dev1\OpenGLPrj\src\Treasure.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\main.cpp.obj: CMakeFiles\OpenGLPrj.dir\flags.make
CMakeFiles\OpenGLPrj.dir\src\main.cpp.obj: ..\src\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/OpenGLPrj.dir/src/main.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\OpenGLPrj.dir\src\main.cpp.obj /FdCMakeFiles\OpenGLPrj.dir\ /FS -c C:\Users\User\dev1\OpenGLPrj\src\main.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLPrj.dir/src/main.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\OpenGLPrj.dir\src\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\dev1\OpenGLPrj\src\main.cpp
<<

CMakeFiles\OpenGLPrj.dir\src\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLPrj.dir/src/main.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\OpenGLPrj.dir\src\main.cpp.s /c C:\Users\User\dev1\OpenGLPrj\src\main.cpp
<<

CMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.obj: CMakeFiles\OpenGLPrj.dir\flags.make
CMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.obj: ..\vendor\glad\src\glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/OpenGLPrj.dir/vendor/glad/src/glad.c.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.obj /FdCMakeFiles\OpenGLPrj.dir\ /FS -c C:\Users\User\dev1\OpenGLPrj\vendor\glad\src\glad.c
<<

CMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenGLPrj.dir/vendor/glad/src/glad.c.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\User\dev1\OpenGLPrj\vendor\glad\src\glad.c
<<

CMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenGLPrj.dir/vendor/glad/src/glad.c.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.s /c C:\Users\User\dev1\OpenGLPrj\vendor\glad\src\glad.c
<<

# Object files for target OpenGLPrj
OpenGLPrj_OBJECTS = \
"CMakeFiles\OpenGLPrj.dir\src\Box.cpp.obj" \
"CMakeFiles\OpenGLPrj.dir\src\Brick.cpp.obj" \
"CMakeFiles\OpenGLPrj.dir\src\Camera.cpp.obj" \
"CMakeFiles\OpenGLPrj.dir\src\Scene.cpp.obj" \
"CMakeFiles\OpenGLPrj.dir\src\Shader.cpp.obj" \
"CMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.obj" \
"CMakeFiles\OpenGLPrj.dir\src\main.cpp.obj" \
"CMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.obj"

# External object files for target OpenGLPrj
OpenGLPrj_EXTERNAL_OBJECTS =

OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\src\Box.cpp.obj
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\src\Brick.cpp.obj
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\src\Camera.cpp.obj
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\src\Scene.cpp.obj
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\src\Shader.cpp.obj
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\src\Treasure.cpp.obj
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\src\main.cpp.obj
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\vendor\glad\src\glad.c.obj
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\build.make
OpenGLPrj\bin\OpenGLPrj.exe: vendor\glfw\src\glfw3.lib
OpenGLPrj\bin\OpenGLPrj.exe: CMakeFiles\OpenGLPrj.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable OpenGLPrj\bin\OpenGLPrj.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\OpenGLPrj.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\OpenGLPrj.dir\objects1.rsp @<<
 /out:OpenGLPrj\bin\OpenGLPrj.exe /implib:OpenGLPrj\lib\OpenGLPrj.lib /pdb:C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\OpenGLPrj\bin\OpenGLPrj.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  vendor\glfw\src\glfw3.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<
	echo >nul && "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E copy_directory C:/Users/User/dev1/OpenGLPrj/res C:/Users/User/dev1/OpenGLPrj/cmake-build-debug/OpenGLPrj/bin/../res

# Rule to build all files generated by this target.
CMakeFiles\OpenGLPrj.dir\build: OpenGLPrj\bin\OpenGLPrj.exe

.PHONY : CMakeFiles\OpenGLPrj.dir\build

CMakeFiles\OpenGLPrj.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\OpenGLPrj.dir\cmake_clean.cmake
.PHONY : CMakeFiles\OpenGLPrj.dir\clean

CMakeFiles\OpenGLPrj.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\User\dev1\OpenGLPrj C:\Users\User\dev1\OpenGLPrj C:\Users\User\dev1\OpenGLPrj\cmake-build-debug C:\Users\User\dev1\OpenGLPrj\cmake-build-debug C:\Users\User\dev1\OpenGLPrj\cmake-build-debug\CMakeFiles\OpenGLPrj.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\OpenGLPrj.dir\depend

