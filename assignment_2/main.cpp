#include <iostream>

int main(){
    // fahrenheit = (9.0 / 5) * celsius + 32
    double celsius;
    double fahrenheit;

    std::cin >> celsius;
    fahrenheit = (9.0 / 5) * celsius + 32;
    std::cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}