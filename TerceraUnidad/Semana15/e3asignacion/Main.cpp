#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList ready_1(32);
    LinkedList ready_2(65);
    ready_2 += ready_1;

    std::cout << ready_2 << std::endl;

    std::cout << ready_1 << std::endl;
    return 0;
}
