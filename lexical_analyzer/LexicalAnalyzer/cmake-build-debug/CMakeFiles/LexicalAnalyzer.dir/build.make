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
CMAKE_COMMAND = "D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\LexicalAnalyzer.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\LexicalAnalyzer.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\LexicalAnalyzer.dir\flags.make

CMakeFiles\LexicalAnalyzer.dir\main.cpp.obj: CMakeFiles\LexicalAnalyzer.dir\flags.make
CMakeFiles\LexicalAnalyzer.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LexicalAnalyzer.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\LexicalAnalyzer.dir\main.cpp.obj /FdCMakeFiles\LexicalAnalyzer.dir\ /FS -c C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\main.cpp
<<

CMakeFiles\LexicalAnalyzer.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LexicalAnalyzer.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\LexicalAnalyzer.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\main.cpp
<<

CMakeFiles\LexicalAnalyzer.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LexicalAnalyzer.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\LexicalAnalyzer.dir\main.cpp.s /c C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\main.cpp
<<

CMakeFiles\LexicalAnalyzer.dir\lexical.cpp.obj: CMakeFiles\LexicalAnalyzer.dir\flags.make
CMakeFiles\LexicalAnalyzer.dir\lexical.cpp.obj: ..\lexical.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LexicalAnalyzer.dir/lexical.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\LexicalAnalyzer.dir\lexical.cpp.obj /FdCMakeFiles\LexicalAnalyzer.dir\ /FS -c C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\lexical.cpp
<<

CMakeFiles\LexicalAnalyzer.dir\lexical.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LexicalAnalyzer.dir/lexical.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\LexicalAnalyzer.dir\lexical.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\lexical.cpp
<<

CMakeFiles\LexicalAnalyzer.dir\lexical.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LexicalAnalyzer.dir/lexical.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\LexicalAnalyzer.dir\lexical.cpp.s /c C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\lexical.cpp
<<

# Object files for target LexicalAnalyzer
LexicalAnalyzer_OBJECTS = \
"CMakeFiles\LexicalAnalyzer.dir\main.cpp.obj" \
"CMakeFiles\LexicalAnalyzer.dir\lexical.cpp.obj"

# External object files for target LexicalAnalyzer
LexicalAnalyzer_EXTERNAL_OBJECTS =

LexicalAnalyzer.exe: CMakeFiles\LexicalAnalyzer.dir\main.cpp.obj
LexicalAnalyzer.exe: CMakeFiles\LexicalAnalyzer.dir\lexical.cpp.obj
LexicalAnalyzer.exe: CMakeFiles\LexicalAnalyzer.dir\build.make
LexicalAnalyzer.exe: CMakeFiles\LexicalAnalyzer.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LexicalAnalyzer.exe"
	"D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\LexicalAnalyzer.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\LexicalAnalyzer.dir\objects1.rsp @<<
 /out:LexicalAnalyzer.exe /implib:LexicalAnalyzer.lib /pdb:C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\cmake-build-debug\LexicalAnalyzer.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\LexicalAnalyzer.dir\build: LexicalAnalyzer.exe

.PHONY : CMakeFiles\LexicalAnalyzer.dir\build

CMakeFiles\LexicalAnalyzer.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LexicalAnalyzer.dir\cmake_clean.cmake
.PHONY : CMakeFiles\LexicalAnalyzer.dir\clean

CMakeFiles\LexicalAnalyzer.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\cmake-build-debug C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\cmake-build-debug C:\Users\admin\Desktop\lexical_analyzer\LexicalAnalyzer\cmake-build-debug\CMakeFiles\LexicalAnalyzer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\LexicalAnalyzer.dir\depend
