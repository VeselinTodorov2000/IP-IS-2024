#include <iostream>


int main() {
    int numbers[100];
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    int countOverAverage = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    double average = (double) sum / n;
    for(int i = 0; i < n; i++) {
        if(numbers[i] > average) {
            countOverAverage++;
        }
    }
    
    std::cout << "Average: " << average << std::endl;
    std::cout << "Numbers over the average: " << countOverAverage << std::endl;
    return 0;
}