#include<iostream>
#include <math.h>

// A simple program with

// Preprocessor directives
#ifdef CHANGE_PREPROCESSOR
    #define OWN_PI 5.0
#else
    #define PI 3.15
#endif


int main() {
    std::cout << "Hello, compiler!" << std::endl;
    #ifdef CHANGE_PREPROCESSOR
        std::cout << "The value of PI is: " << 3.4 << std::endl;
    #else
        std::cout << "The value of PI is: " << M_PI << std::endl;
    #endif

    return 0;
}