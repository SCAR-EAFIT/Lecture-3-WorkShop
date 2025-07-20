#ifndef MESSAGE_LIB_H
#define MESSAGE_LIB_H

class MessageLib {
private:
    char buffer[20];  // Buffer pequeño para forzar warnings
    
public:
    MessageLib();
    
    // Función 1: Warnings por buffer overflow y format string
    void printMessage(const char* msg);
    
    // Función 2: Warnings por variables no inicializadas
    int calculateScore();
    
    // Función 3: Warnings por comparaciones peligrosas
    void processRange(int start, unsigned int end);
};

#endif