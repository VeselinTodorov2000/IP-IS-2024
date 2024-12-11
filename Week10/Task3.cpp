#include <iostream>

int lastAverage(double* array, int size) {
    if(size >= 2 && array[size-1] == array[size-2]) {
        return size - 1;
    }
    
    for(int i = size - 2; i > 0; i--) {
        if(array[i] == ((array[i-1] + array[i+1])/2)) {
            return i;
        }
    }
    
    if(size >= 2 && array[0] == array[1]) {
        return 0;
    }
}

int main()
{   
    double array[6] = {8, 9, 2, 3, 4, 0};
    std::cout << lastAverage(array, 6) << std::endl;
    
    double array2[6] = {8, 9, 2, 3, 4, 4};
    std::cout << lastAverage(array2, 6) << std::endl;
    
    double array3[6] = {0, 0, 10, 50, 1000, 1000000};
    std::cout << lastAverage(array3, 6) << std::endl;
}