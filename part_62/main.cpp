#include <iostream>

int main(){
    // const unsigned int earth_radius_km {6371}; // radius in km
    // earth_radius_km = 7000; // Compiler error
    // earth_radius++; // Compiler error

    // can be involved in other calculations
    const unsigned int earth_radius_km {6371};
    int expanded_radius = 3 * earth_radius_km;

    std::cout << "Expanded earth radius: " << expanded_radius << std::endl;

    // const int age;
    const int age {34};
    const float height {1.67};
    
    // age = 55; // can't modify
    // height = 1.8f; // can't modify

    int years {3 * age};

    std::cout << "age: " << age << std::endl;
    std::cout << "height: " << height << std::endl;
    std::cout << "years: " << years << std::endl;

    return 0;
}