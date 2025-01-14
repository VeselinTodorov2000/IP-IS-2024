#include <iostream>

void printNumbers(int n) {
    if(n == 1) {
        std::cout << "1" << std::endl;
        return;
    }
    std::cout << n << std::endl;
    printNumbers(n-1);
}

void toBinary(int n) {
    if(n == 0) {
        std::cout << "0";
    } else if(n == 1) {
        std::cout << "1";
    } else {
        toBinary(n/2);
        std::cout << n%2;
    }
}

int main()
{
    printNumbers(20);
    return 0;
}