#include <iostream>

void generateFibonacci(int max) {
    std::cout << "1 1 ";
    int fst = 1, snd = 1;
    while(true) { 
        int temp = snd;
        snd = fst + snd;
        fst = temp;
        if(snd <= max) {
            std::cout << snd << " ";
        } else {
            break;
        }
    }
}

int main()
{
    int max;
    do {
    std::cin >> max; }
    while(max < 0);
    
    generateFibonacci(max);
}