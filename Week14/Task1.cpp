#include <iostream>
#include <cmath>

int findSumOfPowers(int number, int power) {
    if(number == 0) {
        return 0;
    }
    if(number < 10) {
        return pow(number, power);
    }
    return pow(number%10, power) + findSumOfPowers(number/10, power);
}

bool isNumberRed(int number) {
    return number % (findSumOfPowers(number, 1)) == 0;
}

bool isNumberGreen(int number) {
    return number == (findSumOfPowers(number, 3));
}

bool hasTwoRedOrGreenNumbersInInterval(int start, int end) {
    int count = 0;
    while(start <= end) {
        if(isNumberRed(start) || isNumberGreen(start)) {
            count++;
        }
        if(count == 2) {
            return true;
        }
        start++;
    }
    return false;
}

int main()
{
    int start, end;
    std::cout << "Enter start of interval: ";
    std::cin >> start;
    std::cout << "Enter end of interval: ";
    std::cin >> end;
    if(hasTwoRedOrGreenNumbersInInterval(start, end)) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
}