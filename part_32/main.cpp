#include <iostream>

int main(int argc, char **argv)
{

    // Compile time error
    std::cout << "Hello World in C++20" << std::endl;

    // Run time error
    int value = 7/0;
    std::cout << value << std::endl;

    return 0;

}