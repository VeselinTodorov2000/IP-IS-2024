#include <iostream>
#include <cmath>

int factorial(int number) {
    int fact = 1;
    while(number >= 1) { 
        fact *= number;
        number--;
    }
    return fact;
}

int main()
{
    int start, end;
    int number;
    std::cout << "Enter start:";
    std::cin >> start;
    std::cout << "Enter end:";
    std::cin >> end;
    std::cout << "Enter number:";
    std::cin >> number;
    
    bool isInsideRange = start <= number && number <= end;
    if(isInsideRange) {
        std::cout << "Factorial is " << factorial(number) << std::endl;
    }
    else { 
        std::cout << "Number you provided is outside the range" << std::endl;
    }
}