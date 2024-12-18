#include <iostream>

//Task 3
int** sumOfMatrix(int** fst, int** snd, int n, int m) {
    int** sum = new int*[n];
    for(int i = 0; i < n; i++) {
        sum[i] = new int[m];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum[i][j] = fst[i][j] + snd[i][j];
        }
    }
    
    return sum;
}

void printArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int** first = new int*[2];
    for(int i = 0; i < 2; i++) {
        first[i] = new int[2];
    }
    first[0][0] = 22;
    first[0][1] = 1;
    first[1][0] = 10;
    first[1][1] = 6;
    
    int** second = new int*[2];
    for(int i = 0; i < 2; i++) {
        second[i] = new int[2];
    }
    second[0][0] = 5;
    second[0][1] = 8;
    second[1][0] = 13;
    second[1][1] = 21;
    
    int** result = sumOfMatrix(first, second, 2, 2);    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    //free the memory
    for(int i = 0; i < 2; i++) {
        delete[] first[i];
        delete[] second[i];
        delete[] sum[i];
    }
    delete[] first;
    delete[] second;
    delete[] sum;
    
    return 0;
}