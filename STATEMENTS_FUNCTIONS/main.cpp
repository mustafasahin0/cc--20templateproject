#include <iostream>

int addNumbes(int number1, int number2) {
    return number1 + number2; // return statement
}

int main () {

    int fist_number {3}; // statement
    int second_number {5}; 
    
    std::cout << "First Number: " << fist_number << std::endl; // statement
    std::cout << "Second Number: " << second_number << std::endl;

    int sum = addNumbes(fist_number, second_number); // statement

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}