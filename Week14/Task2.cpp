#include <iostream>
#include <cmath>

void fixMatrix(int **matrix, int rows, int cols) {
    //reverse rows with more evens than odds
    for(int i = 0; i < rows; i++) {
        int numberOfEvens = 0;
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] % 2 == 0) {
                numberOfEvens++;
            }
        }
        if(numberOfEvens > cols - numberOfEvens) {
            for(int j = 0; j < cols/2; j++) {   
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][cols-j-1];
                matrix[i][cols-j-1] = temp;
            }
        }
    }
    
    //reverse diagonals on quadratic matrix
    if(rows == cols) {
        for(int i = 0; i < rows; i++) {
            int temp = matrix[i][i];
            matrix[i][i] = matrix[i][cols-i-1];
            matrix[i][cols-i-1] = temp;
        }
    }
}

int main()
{
    int** matrix = new int*[5];
    for(int i = 0; i < 5; i++) {
        matrix[i] = new int[5];
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cin >> matrix[i][j];
        }   
    }
    
    fixMatrix(matrix, 5, 5);       
    std::cout << "--------------------------" << std::endl;
     
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cout << matrix[i][j] << " ";
        }   
        std::cout << std::endl;
    } 
     
    for(int i = 0; i < 5; i++) {
        delete[] matrix[i];
    }         
    delete[] matrix;
}