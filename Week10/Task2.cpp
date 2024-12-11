#include <iostream>
#include <cmath>

void mergeSort(int* firstArray, int firstSize, int* secondArray, int secondSize, int* thirdArray) {
    int firstIndex = 0;
    int secondIndex = 0;
    int thirdIndex = 0;
    
    while(firstIndex != firstSize || secondIndex != secondSize) {
        if(firstArray[firstIndex] <= secondArray[secondIndex]) {
            thirdArray[thirdIndex] = firstArray[firstIndex];
            firstIndex++;
            thirdIndex++;
        } 
        else {
            thirdArray[thirdIndex] = secondArray[secondIndex];
            secondIndex++;
            thirdIndex++;
        }
    }
    
    while(firstIndex != firstSize) {
        thirdArray[thirdIndex] = firstArray[firstIndex];
        firstIndex++;
        thirdIndex++;
    }
    
    while(secondIndex != secondSize) {
        thirdArray[thirdIndex] = secondArray[secondIndex];
        secondIndex++;
        thirdIndex++;
    }
}

int main()
{   
    int array1[4] = {5, 8, 10, 13};
    int array2[3] = {6, 7, 9};
    int array3[7];
    mergeSort(array1, 4, array2, 3, array3);
    for(int i = 0; i < 7; i++) {
        std::cout << array3[i] << " ";    
    }
}