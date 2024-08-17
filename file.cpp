#include<iostream> // Use <iostream> for C++ input/output

int main() {
    int a, b, sum;
    
    std::cout << "Enter no 1: "; // std::cout for output in C++
    std::cin >> a;               // std::cin for input in C++
    
    std::cout << "Enter no 2: ";    
    std::cin >> b;
    
    sum = a + b;
    std::cout << "The sum is " << sum << std::endl; // Use << to concatenate output
    
    return 0; // Return 0 to indicate successful execution
}
