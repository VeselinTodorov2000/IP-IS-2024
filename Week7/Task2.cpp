#include <iostream>
#include <cmath>

double calculateAverage(double sum, int count) {
    return sum / count;
}

int main()
{
    double sum = 0; 
    double number = 0;
    int count = 0;
    
    do {
        std::cin >> number;
        sum += number;
        count++;
    } while (number != -1);
    sum += 1;
    count--;
    
    double average = calculateAverage(sum, count);
    std::cout << average << " -> ";
    if(average >= 5.5) {
        std::cout << "Excellent" << std::endl;
    } else if(average >= 4.5) {
        std::cout << "Very good" << std::endl;
    } else if(average >= 3.5) {
        std::cout << "Good" << std::endl;
    } else if(average >= 3) {
        std::cout << "Fair" << std::endl;
    } else {
        std::cout << "Failed" << std::endl;
    }
}