#include <iostream>

int main(){

    double x, y;

    std::cout << "Welcome to territory control. Please type in your x and y positions" << std::endl;
    std::cout << "Type in your x location: " << std::endl;
    std::cin >> x;
    std::cout << "Type in your y location: " << std::endl;
    std::cin >> y;

    if(x > -10 && x < 10) {
        if(y > -5 && y < 5) {
            std::cout << "You are completely surrounded. Don't move!" << std::endl;
            return 0;
        }
    }
    std::cout << "You're out of reach!" << std::endl;

    return 0;
}