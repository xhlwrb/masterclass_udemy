#include <iostream>

int main(){

    // Variable braced initialization
    // Variable may contain random garbage value. WARNING
    int elephant_count;

    int lion_count{}; // Initialize to zero
    
    int dog_count {10}; // Initialize to 10

    int cat_count {15}; // Initialize to 15

    // Can use expression as initializer
    int domesticated_animals { dog_count + cat_count };

    // Won't compile, the expression in the braces uses undeclared variables
    // int bad_initialization { doesnt_exist1 + doesnt_exist2 };

    // 2.9 is of type double, with a wider range than int. ERROR OR WARNING.
    // int narrowing_conversion {2.9};

    // Functional variable initialization
    int apple_count(5);
    
    int orange_count(10);

    int fruit_count(apple_count + orange_count);

    // int bad_initialization(doesnt_exist3 + doesnt_exist4);

    // Information lost. less safe than braced initializers
    int narrowing_conversion_functional(2.9);
    std::cout << "warning not error, not safe" << std::endl;

    // Assignment initialization
    int bike_count = 2;

    int truck_count = 7;

    int vehicle_count = bike_count + truck_count;

    int narrowing_conversion_assignment = 2.9;
    std::cout << "warning not error, not safe" << std::endl;

    // Size of a type in memory
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;

}