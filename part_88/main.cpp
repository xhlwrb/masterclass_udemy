#include <iostream>

int main(){

    int max{};
    int a {35};
    int b {200};

    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }

    std::cout << "max: " << max << std::endl;

    max = (a > b) ? a : b; // ternary operator

    std::cout << "max: " << max << std::endl;

    return 0;

}