#include<iostream>

float sumafi(float a, int b) {
    return a + b;
}

double restalf(float a, double b) {
    return a - b;
}

long multiplicaid(int a, long b) {
    return a * b;
}

template <class typeA, class typeB, class typeC>

typeA oper_( typeA(*option) ( typeB, typeC ), typeB num1, typeC num2 ){

    return option(num1, num2);

}

int main(){


    std::cout << "Suma: " << oper_(sumafi, 4.0f, 5) << "\n";

    std::cout << "Resta: " << oper_(restalf, 4.0f, 5.0) << "\n";

    std::cout << "Multiplicacion: " << oper_(multiplicaid, 4, 5L) << "\n";
    
    return 0;
}
