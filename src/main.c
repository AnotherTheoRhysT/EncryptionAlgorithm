#include<stdio.h>

#include "../include/decryption.h"
#include "../include/encryption.h"
#include "../include/inputValidation.h"
#include "../include/outputTxt.h"

int main ()
{
    // Terminal Arguments documentation 
	// https://www.tutorialspoint.com/cprogramming/c_command_line_arguments.htm
	
	// File handling documentation
	// https://www.programiz.com/c-programming/c-file-input-output

	printf("Hello, World\n");
	
    decrypt();
    encrypt();
    validate();
    output();


	return 0;
}
