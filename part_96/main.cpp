#include <iostream>

int main(){

    // Print I love C++ 10 times; the bad way
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;

    // for loop, the good way
    /*
    for(unsigned int i {0}; i < 10000; ++i) {
        // whatever we want the loop to run
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    */

    // Use size_t: a representation of some unsigned int for positive numbers [sizes]
    for(size_t i{0}; i < 10; ++i){
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    // sizeof(size_t);
    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;

    // Scope of the iterator
    for(size_t i{0}; i < 10; ++i){
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    // std::cout << "i: " << i << std::endl;
    
    // Iterator declared outside the loop
    size_t i {0}; // iterator defined outside
    for(i; i < 10; ++i){
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i: " << i << std::endl;

    // leave out the iterator declared part
    size_t j {0}; // iterator defined outside
    for( ; j < 10; ++j){
        std::cout << j << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "j: " << j << std::endl;

    // Don't hardcore values: BAD!
    const size_t COUNT {15};
    for(size_t i {0}; i < COUNT; ++i){
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    return 0;
}