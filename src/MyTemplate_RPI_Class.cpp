/**		MyTemplate_RPI_Class source code.
 * 	@file			MyTemplateClass.cpp
 * 	@version	0.2
 * 	@author	Ludwig Schink
 * 	@date		18.02.2022
 * 	@brief		This file contains the MyTemplate_RPI_Class class implementation.*/

#include "MyTemplate_RPI_Class.h"

MyTemplate_RPI_Class::MyTemplate_RPI_Class(void)
{
//necassary step
wiringPiSetup();
//define outputs
pinMode(MYOUTPUT0,OUTPUT);
pinMode(MYOUTPUT1,OUTPUT);
//define inputs
pinMode(MYINPUT0,INPUT);
pinMode(MYINPUT1,INPUT);
}

int MyTemplate_RPI_Class::SetOutput(int output, int out_state)
{
//suggestion for error handling for out_state
if(out_state<0 || out_state>=Out_States_End)
	{
	return  Errors_BadOutputState;
	}
//suggestion for error handling for output
if(output>=Outputs_End || output<MYOUTPUT0)
	{
	return  Errors_BadOutput;
	}
else {
	 digitalWrite(output,out_state);
	 }
return Errors_NoErrors;
}

int MyTemplate_RPI_Class::GetInput(int input)
{
if(input<0 || input >= Inputs_End)
	{
	return Errors_BadInput;
	}
return digitalRead(input);
}

MyTemplate_RPI_Class::~MyTemplate_RPI_Class(void)
{}
