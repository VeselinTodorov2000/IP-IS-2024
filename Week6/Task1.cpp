#include <iostream>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void calculate(int a, int b) {
    std::cout << add(a, b) << std::endl;
    std::cout << multiply(a, b) << std::endl;
}

int main()
{
    int a = 3, b = 4;
    
    calculate(3, 4);
    
    std::cout << add(a, b) << std::endl;
    std::cout << multiply(a, b) << std::endl;
    return 0;
}