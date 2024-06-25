// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
int a, b =5; //These are global variables that are stored in static memory of the system until the whole program ends.
int main(){
    bool my_flag; //this is a internal variable. The value of the bool gets deleted by the memory when the system escapes the function.
    a =7;
    my_flag = false;
    std::cout << "a ="<<a<<std::endl;
    std::cout << "b ="<<b<<std::endl;
    std::cout << "flag="<< my_flag<<std::endl;
    my_flag = true;
    std::cout << "flag="<< my_flag<<std::endl;
    std::cout << "a + b = "<<a +b<<std::endl;
    std::cout << "b - a = "<<b-a<<std::endl;
//Signed and Unsigned Variables:
// Signed Types represents negative or positive numbers (including zeros)
// Unsigned Types represents only values greater than or equal to zero. (Positive Numbers Only)
// By Default, int, short, long and long long are all signed.

// For Char, there are 3 distinct basic character types:
//  char
//  signed char
//  unsigned char
//char and signed char are not the same.
//  It depends on the compiler.

    unsigned int positive;

    positive = b - a;
    std::cout << "b - a (Unsigned) = "<< positive << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
