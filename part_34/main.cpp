#include <iostream>
#include <limits>

int main(){
    // Printing data

    // std::cout: Printing stuff to the console
    std::cout << "Hello World!" << std::endl;

    std::cout << "The number is: " << 12 << std::endl;

    int age {21};
    std::cout << "The age is: " << age << std::endl;

    // Error
    std::cerr << "std::cerr output: Something went wrong" << std::endl;

    // Log message
    std::clog << "std::clog output: This is a log message" << std::endl;

    // Reading date in
    int age1;
    std::string name;

    std::cout << "Please type in your Last Name: " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age1;

    std::cout << "Hello " << name << "! You are " << age1 << " years old" << std::endl;

    // Chaining std::cin
    int age2;
    std::string name2;

    std::cout << "Please type in your last name and age, seperated by spaces: " << std::endl;

    std::cin >> name2 >> age2; // Input name and age

    std::cout << "Hello " << name2 << "! You are " << age2 << " years old." << std::endl;

    // Reading data with spaces
    int age3;
    std::string full_name;

    std::cout << "Please type in your full name and age: " << std::endl;

    // flush before getline
    std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hello " << full_name << "! You are " << age3 << " years old." << std::endl;

    return 0;
}