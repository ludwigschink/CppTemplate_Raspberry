# Raspberry_C++_Template README.md 0.3

This is a suggestion for a simple Geany C++ template for raspberry Pi (espacially 3B+ and 4).

## Needed Packages

Under normal circumstances, you only need to install cmake and doxygen:

sudo apt-get install cmake doxygen

All other packages should be pre-installed on a normal raspbian installation. If not, all packages
you need are listed below:

geany
g++
gcc
cmake
make
wiringpi
doxygen

## Using this Project

### Prequels

If this project is not stored under /home/pi/Desktop/Geany_WS/Raspberry_Cpp_Template, you have to do
some edits in the geany project settings. 

- Project -> Preferences
- under the tap "Project" you can change the base directory (path to this project)

### Compiling

inside geany:	- At the very first, click the tab 'Make' and then click 'cmake' in the sub menu.
				- output should end with something like 'Build files have been written to: /home/pi/Desktop/Geany_WS/Raspberry_Cpp_Template/build'
				  if no errors occured.
				- Now you can build: click the tab 'Make' and the again 'Make' or press shift-F9
				- press F5 for run the compiled binary.

outside geany:	- cd in the 'build' directory in this project.
				- type in 'cmake ..'
				- after succes, go on with 'make -j$(nproc --all)'
				- run the bianry with './Raspberry_Cpp_RPI_Template'
### Compile documentation

In the project base directory, execute 'doxygen DoxygenConfig.txt'. You can view the produced code by
opening the 'index.html' file in the now created directory 'html' with a browser e.g. firefox.
