/**	@mainpage 		Raspberry C++ Template
 *	@Board Version:	RPI 3B+
 *	@image 			html default.png*/
 
/**		Raspberry C++ Template
 * 	@file		main.cpp
 * 	@version	0.3
 * 	@author		Ludwig Schink
 * 	@date		28.02.2021
 * 	@brief		Entry point for program.*/

#include <iostream>

#include "MyTemplate_RPI_Class.h"

/**		int main(int argc, char *argv[])
 * 	@brief	Entry point for executable!
 * 	@param	argc: number of passed arguments.
 *	@param	argv: char vector of argument
 * 	@return Error code at return*/
int main(int argc, char *argv[])
{
MyTemplate_RPI_Class Class;

std::cout << "Setting OUTPUT A to 1" << std::endl;
Class.SetOutput(MyTemplate_RPI_Class::Outputs_A,MyTemplate_RPI_Class::Out_States_High);
std::cout << "Setting OUTPUT B to 1" << std::endl;
Class.SetOutput(MyTemplate_RPI_Class::Outputs_B,MyTemplate_RPI_Class::Out_States_High);
std::cout << "Reading Input A:" << Class.GetInput(MyTemplate_RPI_Class::Inputs_A) << std::endl;
std::cout << "Reading Input B:" << Class.GetInput(MyTemplate_RPI_Class::Inputs_B) << std::endl;
return 0;
}
