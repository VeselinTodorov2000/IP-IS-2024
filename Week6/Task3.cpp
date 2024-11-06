#include <iostream>

double area(double radius) {
    return 3.14 * radius * radius;    
}
    
double area(double length, float width) {
    return length * width;
}
    
double area(double base, double height) {
    return (base * height) / 2;
}

int main()
{
    double a = 3, b = 4;
    std::cout << area(2) << std::endl;
    std::cout << area(a, (float)b) << std::endl;
    std::cout << area(a, b) << std::endl;
    return 0;
}