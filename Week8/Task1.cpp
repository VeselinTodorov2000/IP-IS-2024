#include <iostream>
#include <climits>

int main() {
    int numbers[100];
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    std::cout << "Maximal number is " << max << std::endl;
}