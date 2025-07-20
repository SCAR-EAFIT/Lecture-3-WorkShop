#include "message_lib.h"
#include <iostream>

int main() {
    std::cout << "=== Demo Warnings del Compilador ===" << std::endl;
    
    MessageLib lib;
    
    // Trigger warnings
    lib.printMessage("Este mensaje es demasiado largo para el buffer y causará overflow");
    
    int score = lib.calculateScore();
    std::cout << "Score: " << score << std::endl;
    
    lib.processRange(-5, 10U);  // Signed vs unsigned
    
    // Warning 9: Unused variable
    int unused_var = 42;
    
    // Warning 10: Unreachable code
    return 0;
    std::cout << "Esta línea nunca se ejecuta" << std::endl;
}