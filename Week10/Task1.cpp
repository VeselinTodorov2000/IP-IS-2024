#include <iostream>
#include <cmath>

void swap(int& fst, int& snd) {
    int temp = fst;
    fst = snd;
    snd = temp;
}

void reverse(int* array, int size) {
    for(int i = 0; i < size / 2; i++) {
        swap(array[i], array[size - i - 1]);
    }
}

int main()
{   
    int array[5] = {1, 2, 3, 4, 5};
    reverse(array, 5);
    
    for(int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";    
    }
}