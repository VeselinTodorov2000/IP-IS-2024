#include <iostream>

int max = -2000;

void set_max(int a) {
    max = a;
}

int get_max() {
    return max;
}

void computeAndUpdateMax(int a, int b) {
    int sum = a + b;
    if(sum > get_max()) {
        set_max(sum);
    }
}        

int main()
{
    computeAndUpdateMax(3, 4);
    std::cout << get_max() << std::endl;
    computeAndUpdateMax(5, 7);
    std::cout << get_max() << std::endl;
    computeAndUpdateMax(5, 4);
    std::cout << get_max() << std::endl;
    computeAndUpdateMax(30, 4);
    std::cout << get_max() << std::endl;
    return 0;
}