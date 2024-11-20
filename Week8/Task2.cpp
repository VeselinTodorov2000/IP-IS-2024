#include <iostream>

int main() {
    int numbers[100];
    int n, positiveSum = 0, negativeSum = 0;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(numbers[i] > 0) {
            positiveSum += numbers[i];
        }
        else {
            negativeSum += numbers[i];
        }
    }
    
    std::cout << "Positive sum: " << positiveSum << std::endl;
    std::cout << "Negative sum: " << negativeSum << std::endl;
    return 0;
}