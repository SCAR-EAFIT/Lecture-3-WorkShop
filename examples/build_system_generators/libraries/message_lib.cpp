#include "message_lib.h"
#include <iostream>
#include <cstring>
#include <cstdio>

MessageLib::MessageLib() {
    // Sin inicializar buffer intencionalmente
}

void MessageLib::printMessage(const char* msg) {
    if (!msg) return;
    
    // Warning 1: Buffer overflow potencial
    strcpy(buffer, msg);  // -Wstringop-overflow detecta esto
    
    // Warning 2: Format string vulnerability
    printf(msg);  // -Wformat-security detecta esto
    printf("\n");
    
    // Warning 3: Array bounds
    buffer[25] = 'X';  // -Warray-bounds detecta esto (buffer solo tiene 20)
    
    std::cout << "Buffer: " << buffer << std::endl;
}

int MessageLib::calculateScore() {
    int score;  // Warning: variable no inicializada
    int multiplier = 0;
    
    // Warning 4: Uninitialized variable use
    int result = score * 10;  // -Wuninitialized detecta esto
    
    // Warning 5: Division by zero (detectable estáticamente)
    if (multiplier == 0) {
        result = result / multiplier;  // Compiler puede detectar esto
    }
    
    return result;
}

void MessageLib::processRange(int start, unsigned int end) {
    // Warning 6: Signed/unsigned comparison
    if (start > end) {  // -Wsign-compare detecta esto
        std::cout << "Invalid range" << std::endl;
        return;
    }
    
    // Warning 7: Infinite loop potential
    for (int i = start; i != end; i++) {  // Si end es muy grande, overflow
        if (i > 10) break;  // Safety break
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // Warning 8: Unused parameter en algunas versiones
    start = start;  // Self-assignment warning
}