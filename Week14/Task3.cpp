#include <iostream>
#include <cmath>

int numberOfUpperCaseBeforeNumber(const char* text) {
    if(*text == 0 || *(text+1) == 0) {
        return 0;
    }
    
    if(('A' <= *text && *text <= 'Z') && ('0' <= *(text+1) && *(text+1) <= '9')) {
        return 1 + numberOfUpperCaseBeforeNumber(text+1);
    }
    return 0 + numberOfUpperCaseBeforeNumber(text+1);
    
}

int main()
{
    std::cout << numberOfUpperCaseBeforeNumber("ab1Cd") << std::endl;
}