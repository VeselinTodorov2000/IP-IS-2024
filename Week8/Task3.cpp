#include <iostream>

bool isPalindrome(char string[]) {
    int lenght = 0;
    for(int i = 0; string[i] != 0; i++) {
        lenght = i;
    }
    
    for(int i = 0; i < lenght; i++, lenght--) {
        if(string[i] != string[lenght]) {
            return false;
        }
    }
    return true;
}

int main() {
    char string[100];
    std::cin >> string;
    std::cout << std::boolalpha << isPalindrome(string) << std::endl;
    return 0;
}