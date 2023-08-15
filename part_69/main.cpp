#include <iostream>

int main(){

    unsigned char char_var {55};

    unsigned char val1 {130};
    unsigned char val2 {131};

    char_var = val1 + val2;

    std::cout << "char_var: " << static_cast<int>(char_var) << std::endl;

    unsigned char data {250};
    
    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;
    
    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl; // 255

    ++data; // overflow
    std::cout << "data: " << static_cast<int>(data) << std::endl; // 256

    std::cout << std::dec;

    data = 1;

    --data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    --data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    return 0;
    
}