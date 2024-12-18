#include <iostream>
#include <cstring>

char* reverse(const char* text) {
    size_t size = strlen(text);
    char* reversed = new char[size + 1];
    for(int i = 0; i < size; i++) {
        reversed[i] = text[size - i - 1];
    }
    
    return reversed;
}

int main() {
    char* reversed = reverse("dynamic");
    std::cout << reversed << std::endl;
    delete[] reversed;
    return 0;
}