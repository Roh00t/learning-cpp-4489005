// Learning C++ 
// Exercise 02_05
// Type inference with auto
// Convenient way of creating variables with the type that suits the value you want to store in it.
// Variable needs to be initialised at declaration.

#include <iostream>
#include <typeinfo>

int main(){
    // Declare 7 variables of auto type a,b,c,d,e,f,g:
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f; //The 'f' in the 3.14f is called the trailing f. It is the constant specifier for floats.
    auto d = 3.14; //Floating point constants are double by default.
    auto e = true; //Boolean constant true = 1.
    auto f = 'd'; // Single Character d, notice it's '' and not "".
    // auto g = "C++ Rocks"; // String value


    // The typeid operator is implementation dependant.
    // So it may behave differently if you are using a compiler or IDE,
    // other than VSCode on GitHub CodeSpaces.

    
    std::cout << "The Type of a is " << typeid(a).name()<< std::endl;
    std::cout << "The Type of b is " << typeid(b).name()<< std::endl;
    std::cout << "The Type of c is " << typeid(c).name()<< std::endl;
    std::cout << "The Type of d is " << typeid(d).name()<< std::endl;
    std::cout << "The Type of e is " << typeid(e).name()<< std::endl;
    std::cout << "The Type of f is " << typeid(f).name()<< std::endl;
    // std::cout << "The Type of g is " << typeid(g).name()<< std::endl; // PKc = pointer to const char which is a fancy word for string
    std::cout << std::endl << std::endl;
    return (0);
}
