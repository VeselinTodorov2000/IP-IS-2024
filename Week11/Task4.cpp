#include <iostream>

//Task 4
int main() {
    int n;
    std::cin >> n;
    
    int *numbers = new int[n];
    for(int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    
    std::cout << "Average is :" << ((double) sum / n) << std::endl;
    delete[] numbers;
    return 0;
}