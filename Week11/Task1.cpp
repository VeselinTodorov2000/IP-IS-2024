#include <iostream>

//Task 1
int* fibbonacciGenerator(int n) {
    int* array = new int[n];
    if(n < 2) {
        return array;
    }
    int first = 1, second = 1;
    array[0] = array[1] = 1;
    
    for(int i = 2; i < n; i++) {
        array[i] = first+second;
        int temp = first;
        first = second;
        second = first + temp;
    }
    
    return array;
}

void printArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    int *result = fibbonacciGenerator(n);
    printArray(result, n);
    delete[] result;
    return 0;
}