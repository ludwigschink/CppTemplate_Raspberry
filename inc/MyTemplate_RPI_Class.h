/**		MyTemplateClass header
 * 	@file		MyTemplateClass.h
 * 	@version	0.2
 * 	@author		Ludwig Schink
 * 	@date		18.02.2021
 * 	@brief		This file contains the MyTemplateClass class definitions.*/

#ifndef MYTEMPLATE_RPI_CLASS_H
#define MYTEMPLATE_RPI_CLASS_H

#include <wiringPi.h>

//define wiring pi pins
//row 1,3,5 ... 39
#define GPIO02_PIN03 8
#define GPIO03_PIN05 9
#define GPIO04_PIN07 7
#define GPIO17_PIN11 0
#define GPIO27_PIN13 2
#define GPIO22_PIN15 3
#define GPIO10_PIN19 12
#define GPIO09_PIN21 13
#define GPIO11_PIN23 14
#define GPIO00_PIN27 30
#define GPIO05_PIN29 21
#define GPIO06_PIN31 22
#define GPIO13_PIN33 23
#define GPIO19_PIN35 24
#define GPIO26_PIN37 25

//row 2,4,6 ... 40
#define GPIO14_PIN08 15
#define GPIO15_PIN10 16
#define GPIO18_PIN12 1
#define GPIO23_PIN16 4
#define GPIO24_PIN18 5
#define GPIO25_PIN22 6
#define GPIO08_PIN24 10
#define GPIO07_PIN26 11
#define GPIO01_PIN28 31
#define GPIO12_PIN32 26
#define GPIO16_PIN36 27
#define GPIO20_PIN38 28
#define GPIO21_PIN40 29

#define MYOUTPUT0	GPIO17_PIN11
#define MYOUTPUT1	GPIO27_PIN13

#define MYINPUT1 GPIO04_PIN07
#define MYINPUT0 GPIO22_PIN15

/**	@brief	Class description for me and doxygen.*/
class MyTemplate_RPI_Class
{
public:
/**	MyTemplate_RPI_Class()
 * 	@brief		Template_RPI_Class() constructor.*/ 
MyTemplate_RPI_Class();

/**	enum outputs
 * 	@brief	This enum describes a suggestion for self defined outputs.*/
enum outputs {
			 Outputs_A=MYOUTPUT0,
			 Outputs_B=MYOUTPUT1,
			 Outputs_End
			 };

/**	enum inputs
 * 	@brief	This enum describes a suggestion for self defined outputs.*/
enum inputs {
			Inputs_A=MYINPUT0,
			Inputs_B=MYINPUT1,
			Inputs_End
			};

/**	enum out_states
 * 	@brief	This enum scribes a suggestion for out and input state definition.*/
enum out_states {
				Out_States_Low=0,
				Out_States_High=1,
				Out_States_End
				};

/**	enum erros
 * 	@brief	This enum scribes a suggestion for error definition. It is good behaviour
 * 					to leave the errors all negative.*/
enum errors {
			Errors_BadInput=-4,
			Errors_ErrorUnknown=-3,
			Errors_BadOutput=-2,
			Errors_BadOutputState=-1,
			Errors_NoErrors=0,
			Errors_End
			};

/**	void SetLED(int led, int output)
 * 	@brief		Sets the self defined led.
 * 	@param	output:		Expecting a member of outputs-enum.
 * 	@param	out_state:	Expecting a member of out_states-enum.
 * 	@return	Error code from errors-enum.*/ 
int SetOutput(int output, int out_state);

/**	void GetInput(int invoid)
 * 	@brief	Template_RPI_Class() constructor.
 * 	@param	input:	Expecting a member of inputs-enum.
 * 	@return	Positive or zero if read input, negativ if Error (see Errors-enum).*/ 
int GetInput(int input);

/**	MyTemplate_RPI_Class()
 * 	@brief		Virtual defined Template_RPI_Class() destructor.*/ 
virtual ~MyTemplate_RPI_Class();
};

#endif
