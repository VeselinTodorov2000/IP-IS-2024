#include <iostream>

//Task 1
size_t strlen(const char* text) {
    size_t count = 0;
    for(int i = 0; text[i] != 0; i++) {
        count++;
    }
    return count;
}

//Task 2
void strcat(char* fst, const char* snd) {
    int i = 0;
    while(fst[i] != 0) {
        i++;
    }
    
    int j = 0;
    while(snd[j] != 0) {
        fst[i + j] = snd[j];
        j++;
    }
    fst[i+j] = 0;
}

//Task 3
int strcmp(const char* fst, const char* snd) {
    if(fst[0] == 0 && snd[0] == 0) {
        return 0;
    }
    if(fst[0] == 0) {
        return -1;
    }
    if(snd[0] == 0) {
        return 1;
    }
    
    for(int i = 0; fst[i] != 0 || snd[i] != 0; i++) {
        if(fst[i] > snd[i]) {
            return 1;
        } else if(fst[i] < snd[i]) {
            return -1;
        }
    }
    return 0;
}

//Task 4
void strcpy(char* destination, const char* source) {
    int i = 0; 
    while(source[i] != 0) {
        destination[i] = source[i];
        i++;
    }
    destination[i] = 0;
}

//Task 5
void reverse(char* text) {
    size_t size = strlen(text) - 1;
    for(int i = 0; i < (size / 2) + 1; i++) {
        char temp = text[i];
        text[i] = text[size - i];
        text[size - i] = temp;
    }
}

//Task 6
size_t countVowels(const char* text) {
    size_t count = 0;
    for(int i = 0; text[i] != 0; i++) {
        if(text[i] == 'a' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'e') {
            count++;
        }
        if(text[i] == 'A' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' || text[i] == 'E') {
            count++;
        }
    }
    return count;
}

//Task 7
bool isPalindrome(const char* text) {
    char textCpy[100];
    strcpy(textCpy, text);
    reverse(textCpy);
    return strcmp(textCpy, text) == 0;
}

//Task 8
void replaceCharacters(char* text, char oldChar, char newChar) {
    for(int i = 0; text[i] != 0; i++) {
        if(text[i] == oldChar) {
            text[i] = newChar;
        }
    }
}

//Task 9
size_t countWords(const char* text) {
    size_t count = 0;
    for(int i = 0; text[i] != 0; i++) {
        if(text[i] == ' ') {
            count++;
        }
    }
    return ++count;
}

int main() 
{
    // char fst[100] = "Anatoli";
    // char snd[100] = "Anna-Maria";
    // reverse(snd);
    // std::cout << snd << std::endl;
    // std::cout << countVowels(fst) << std::endl;
    // std::cout << countVowels(snd) << std::endl;
    // std::cout << isPalindrome("radar");
    // replaceCharacters(snd, 'a', 'b');
    // std::cout << snd;
    // std::cout << countWords("This is a test");
    return 0;
}