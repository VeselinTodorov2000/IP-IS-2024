#include <iostream>
#include <cmath>

bool isPrime(int number) {
    for(int i = 2; i <= sqrt(number); i++) {
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int start, end;
    do {
        std::cin >> start;
    } while(start < 0);
    
    do {
        std::cin >> end;
    } while(end < 0);
    
    while(start <= end) {
        if(isPrime(start)) {
            std::cout << start << " ";
        }
        start++;
    }
}