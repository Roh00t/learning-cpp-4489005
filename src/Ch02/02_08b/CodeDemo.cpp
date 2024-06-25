// Learning C++ 
// Exercise 02_08
// Arrays
// Collections of data.
// Homogenous, composed of parts or elements that are all of the same kind.
// Fixed Size.=
// Contiguous in memory, meaning that the whole array is a sequential block of memory address.

#include <iostream>

// Remember, we have 2 options: Macros and Constant Variables.

//What is the difference between Macros and Constant Variables?
/*
The following are some differences between #define and the const type qualifier:

The #define directive can be used to create a name for a numerical, character, or string constant, whereas a const object of any type can be declared.

A const object is subject to the scoping rules for variables, whereas a constant created using #define is not. Unlike a const object, the value of a macro does not appear in the intermediate source code used by the compiler because they are expanded inline. The inline expansion makes the macro value unavailable to the debugger.

A macro can be used in a constant expression, such as an array bound, whereas a const object cannot. (I think we surely need to use macro to define array_size.

The compiler does not type-check a macro, including macro arguments.
*/

//Marcos:
//#define AGE_LENGTH 4 //Macros have no scope, hence it will act the same if we wrote this code inside of the int main() function.



int main(){
    //Constant Variables:
    // This is a much better option to use.
    // What is size_t ?
    /*
    size_t is a special unsigned integer type defined in the standard library of C and C++ languages. It is the type of the result returned by the sizeof and alignof operators. The size_t is chosen so that it can store the maximum size of a theoretically possible array or an object.
    */

    const size_t AGE_LENGTH = 4; // This is a local initialization and it is a C++ line of code, hence requiring the '=' and ';' at the end.
    // type of array: name of array [Size of Array];
    // int age [4];
    int age [AGE_LENGTH];
    // Assigning values to each element in the array.
    // Arrays in C++ are indexed from 0 to n-1, where n is the capacity of the array.
    // In this case, 0 to 4 - 1 = 3, which means, elements will be positioned, 0, 1, 2, 3 --> 4 Elements in total.

    //Scalar Variables
    //Scalar variables are used to represent individual fixed-size data objects, such as integers and pointers.
    // As with these variables, you are allowed to initalize arrays at declaration.
    float temperature[] = {31.5, 32.7, 38.9};//Length is not specified. That's because we want to assign a list with a constant length.
    // Notice that there is no 'f' at the end of each values provides, so it is actually a list of doubles.
    // Sometimes it is okay. In this case, the compiler can safely assign the float version of the double values to my array.
    // The above is a example of a Implicit Conversions with C++.

    //Using auto with arrays
    //auto age [0] = 25; // Error: 'auto' type cannot appear in top-level array type
    //Notice that auto does not work with arrays, hence the type needs to be specified.


    age [0] = 25;
    age [1] = 20;
    age [2] = 19;
    age [3] = 19;
    // Printing out the contents of the array (without for loop statement)
    std::cout <<"The Age Array has " << AGE_LENGTH <<" elements" << std::endl;
    std::cout <<"Age[0] = " << age[0] << std::endl;
    std::cout <<"Age[1] = " << age[1] << std::endl;
    std::cout <<"Age[2] = " << age[2] << std::endl;
    std::cout <<"Age[3] = " << age[3] << std::endl;
    std::cout << std::endl << std::endl;
    std::cout <<"Temp[0] = " << temperature[0] << std::endl;
    std::cout <<"Temp[1] = " << temperature[1] << std::endl;
    std::cout <<"Temp[2] = " << temperature[2] << std::endl;

    //Adding some Constants to the code.
    //Go back to the declaration of int age [4];.
    // Notice that it is using a number for the length, which is 4.
    //Suppose that the length is going to be used several times in the code.
    // If we change that length, [4], refactoring the code can be tiresome.
    // The solution and best practice is to use a Constant with a name for int age [4].
    // Go outside of int main() function.

    std::cout << std::endl << std::endl;
    return (0);
}
