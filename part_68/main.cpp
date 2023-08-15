#include <iostream>

int main(){

    double x {12.5};
    double y {34.6};

    // Implicit cast will add up the doubles, then turn result into int for assignment
    int sum = x + y;
    std::cout << "The sum is:" << sum << std::endl;

    // Explicitly cast: cast then sum up
    sum = static_cast<int>(x) + static_cast<int>(y);
    std::cout << "Cast then sum, result: " << sum << std::endl;

    // Explicitly cast: sum up then cast, same thing as implicit cast
    sum = static_cast<int> (x + y);
    std::cout << "Sum up then cast, result: " << sum << std::endl;

    // Old style C-cast
    double PI {3.14};

    int int_pi = (int)(PI);
    std::cout << "PI: " << PI << std::endl;
    std::cout << "int_pi: " << int_pi << std::endl;

    return 0;

}