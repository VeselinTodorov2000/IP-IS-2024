#include <iostream>

int a, b;

void initialize(int _a, int _b) {
    a = _a;
    b = _b;
}

void process_data() {
    int tempSum = a + b;
    int tempDiff = a - b;
    
    a = tempSum;
    b = tempDiff;
}

void display_result() {
    std::cout << a << " " << b << std::endl;
}

int main()
{
    initialize(4,5);
    process_data();
    display_result();
}