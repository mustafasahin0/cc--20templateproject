#include <iostream>
#include <string>

int main () {
    // Printing Data to the Console
    std::cout << "Hello C++20" << std::endl;

    int age {21};
    std::cout << "Age: " << age << std::endl;\
    // Using Different Output Streams
    // std::cerr << "Error Message: Something went wrong!" << std::endl;
    // std::clog << "Log Message: Application started successfully." << std::endl;

    // int age1;
    // std::string name;

    // std::cout << "Please enter your name and age" << std::endl;

    // std::cin >> name >> age1;

    // std::cout << "Hello " << name << ", you are " << age1 << " years old." << std::endl;


    std::string full_name;
    std::cout << "Please enter your full name: " << std::endl;
    std::getline(std::cin, full_name);
    
    std::cin >> age;

    std::cout << "Hello " << full_name << ", you are " << age << " years old." << std::endl;

    return 0;
}
