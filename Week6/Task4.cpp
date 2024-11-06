#include <iostream>

void print_info(const char* name, int age = 18) {
    std::cout << name << " " << age << std::endl;
}

int main()
{
    print_info("Ivan");
    print_info("Georgi", 23);
    return 0;
}