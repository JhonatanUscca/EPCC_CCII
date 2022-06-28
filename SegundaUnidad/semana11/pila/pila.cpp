#include <iostream>

#include "pila.h"

int main() {
    try {
        Pila* pila = new Pila(5);
        for (int i = 0; i < 5; ++i) {
            pila->push(i);
        }
        std::cout << "El ultimo elemento es: " << pila->top() << std::endl;
        std::cout << "El ultimo elemento es: " << pila->top() << std::endl;
        std::cout << "El ultimo elemento es: " << pila->pop() << std::endl;
        std::cout << "El ultimo elemento es: " << pila->top() << std::endl;
        pila->clear();
        pila->push(6);
        std::cout << "El ultimo elemento es: " << pila->top() << std::endl;

        
    } catch (const char* men) {
        std::cerr << men << std::endl;
    }

    
    return 0;
}
