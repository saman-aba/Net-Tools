# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/saman/Repo/Net-Tools

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/saman/Repo/Net-Tools/build

# Include any dependencies generated for this target.
include CMakeFiles/DNSParser.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DNSParser.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DNSParser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DNSParser.dir/flags.make

CMakeFiles/DNSParser.dir/src/main.c.o: CMakeFiles/DNSParser.dir/flags.make
CMakeFiles/DNSParser.dir/src/main.c.o: /home/saman/Repo/Net-Tools/src/main.c
CMakeFiles/DNSParser.dir/src/main.c.o: CMakeFiles/DNSParser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/saman/Repo/Net-Tools/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DNSParser.dir/src/main.c.o"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/DNSParser.dir/src/main.c.o -MF CMakeFiles/DNSParser.dir/src/main.c.o.d -o CMakeFiles/DNSParser.dir/src/main.c.o -c /home/saman/Repo/Net-Tools/src/main.c

CMakeFiles/DNSParser.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/DNSParser.dir/src/main.c.i"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/saman/Repo/Net-Tools/src/main.c > CMakeFiles/DNSParser.dir/src/main.c.i

CMakeFiles/DNSParser.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/DNSParser.dir/src/main.c.s"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/saman/Repo/Net-Tools/src/main.c -o CMakeFiles/DNSParser.dir/src/main.c.s

CMakeFiles/DNSParser.dir/src/dns_parser.c.o: CMakeFiles/DNSParser.dir/flags.make
CMakeFiles/DNSParser.dir/src/dns_parser.c.o: /home/saman/Repo/Net-Tools/src/dns_parser.c
CMakeFiles/DNSParser.dir/src/dns_parser.c.o: CMakeFiles/DNSParser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/saman/Repo/Net-Tools/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/DNSParser.dir/src/dns_parser.c.o"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/DNSParser.dir/src/dns_parser.c.o -MF CMakeFiles/DNSParser.dir/src/dns_parser.c.o.d -o CMakeFiles/DNSParser.dir/src/dns_parser.c.o -c /home/saman/Repo/Net-Tools/src/dns_parser.c

CMakeFiles/DNSParser.dir/src/dns_parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/DNSParser.dir/src/dns_parser.c.i"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/saman/Repo/Net-Tools/src/dns_parser.c > CMakeFiles/DNSParser.dir/src/dns_parser.c.i

CMakeFiles/DNSParser.dir/src/dns_parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/DNSParser.dir/src/dns_parser.c.s"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/saman/Repo/Net-Tools/src/dns_parser.c -o CMakeFiles/DNSParser.dir/src/dns_parser.c.s

# Object files for target DNSParser
DNSParser_OBJECTS = \
"CMakeFiles/DNSParser.dir/src/main.c.o" \
"CMakeFiles/DNSParser.dir/src/dns_parser.c.o"

# External object files for target DNSParser
DNSParser_EXTERNAL_OBJECTS =

DNSParser: CMakeFiles/DNSParser.dir/src/main.c.o
DNSParser: CMakeFiles/DNSParser.dir/src/dns_parser.c.o
DNSParser: CMakeFiles/DNSParser.dir/build.make
DNSParser: CMakeFiles/DNSParser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/saman/Repo/Net-Tools/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable DNSParser"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DNSParser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DNSParser.dir/build: DNSParser
.PHONY : CMakeFiles/DNSParser.dir/build

CMakeFiles/DNSParser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DNSParser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DNSParser.dir/clean

CMakeFiles/DNSParser.dir/depend:
	cd /home/saman/Repo/Net-Tools/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/saman/Repo/Net-Tools /home/saman/Repo/Net-Tools /home/saman/Repo/Net-Tools/build /home/saman/Repo/Net-Tools/build /home/saman/Repo/Net-Tools/build/CMakeFiles/DNSParser.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/DNSParser.dir/depend
