#include <iostream>
#include <cstring>

//Task 5
struct Student {
    char name[100];
    int age;
    double grade;
};

int main() {
    Student* students = new Student[2];
    for(int i = 0; i < 2; i++) {
        std::cin.getline(students[i].name, 100);
        std::cin >> students[i].age >> students[i].grade; 
    }
    
    for(int i = 0; i < 2; i++) {
        std::cout << "Student name:" << students[i].name << std::endl;
        std::cout << "Student age:" << students[i].age << std::endl;
        std::cout << "Student grade:" << students[i].grade << std::endl;
    }
    
    delete[] students;
    return 0;
}