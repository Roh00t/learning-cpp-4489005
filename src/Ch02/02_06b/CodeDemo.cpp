// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 
// C++ is a compiled language. So the code goes through a pipeline of software tools 
// which extracts the syntax written by the programmer


//Proprocessor Directives:
// Code is preprocessed prior to compiling.
// Directives tell the preprocessor what to add or remove in the code
// These directives are, #include, #define, #ifdef, etc.
// Useful for libraries, defining constants, selecting code blocks for different compiling scenarios, etc.
// The Types of Directive includes:
// Here’s the list of 4 major types of preprocessor directives in C.
// Macros
// File Inclusion
// Conditional Compilation
// Other directives 

//Fist Type of directive: File Inclusion 
#include <iostream>
#include <string>
#include <cstdint>


//Second Type of directive: Macros
#define CAPACITY 5000 //Note that directives do not end with semi-colon (;)
 
int main(){
    int32_t large = CAPACITY; //This is a signed integer with 32 bits
    
    //Conditional Compilation: ifdef
    #ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
    #endif 
    //End of Conditional Compilation

    uint8_t small = 37; //This is a unsigned integer with 8 bits
    large += small; //This is a shorthand operator which is the same as large = large + small
    std::cout <<"The large integer is " << large << std::endl;
//Fist Type of directive: Conditional Compilation.
// This can be useful for debugging purposes.
/*
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif 
*/

    std::cout << std::endl << std::endl;
    return (0);
}
