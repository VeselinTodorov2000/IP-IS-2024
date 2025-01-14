#include <iostream>

//Task 1
int factorial(int n) {
    if(n <= 1) {
        return 1;
    }
    return n*factorial(n-1);
}
 
//Task 2
int sumUpTo(int n) {
    if(n == 1) {
        return 1;
    }
    return n + sumUpTo(n-1);
}

//Task 3
int fibonacci(int n) {
    if(n == 1 || n == 2) {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int fibIterHelper(int n, int fst, int snd) {
    if(n <= 2) {
        return snd;
    }
    return fibIterHelper(n-1, snd, fst+snd);
}

int fibIter(int n) {
    return fibIterHelper(n, 1, 1);
}

//Task 4
int power(int base, int exponent) {
    if(exponent == 0) {
        return 1;
    }
    if(exponent == 1) {
        return base;
    }
    
    return base * power(base, exponent - 1);
}

//Task 5
bool isPalindrome(const char* str, int start, int end) {
    if(start == end || start > end) {
        return true;
    }
    
    if(str[start] != str[end]) {
        return false;
    }
    
    return isPalindrome(str, start+1, end-1);
}

//Task 6
int gcd(int a, int b) {
    if(a == 0) {
        return b;
    }
    if(b == 0) {
        return a;
    }
    
    return gcd(b, a%b);
}

int main()
{
    // std::cout << factorial(5) << std::endl;
    // std::cout << sumUpTo(5) << std::endl;
    // std::cout << fibonacci(40) << std::endl;
    // std::cout << fibIter(40) << std::endl;
    // std::cout << power(2, 10) << std::endl;
    // std::cout << isPalindrome("radar", 0, 4) << std::endl;
    std::cout << gcd(60, 36) << std::endl;
    return 0;
}