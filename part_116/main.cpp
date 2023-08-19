#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){

    std::srand(std::time(0)); // Seed

    int random_num = std::rand();
    std::cout << "random_num: " << random_num << std::endl; // 0 ~ RANDMAX
    
    random_num = std::rand();
    std::cout << "random_num: " << random_num << std::endl; // 0 ~ RANDMAX

    // Generate random numbers in a loop
    int random_num_loop;
    for(size_t i {0}; i < 20; ++i){
        random_num_loop = std::rand();
        std::cout << "random_num_loop " << i << ": " << random_num_loop << std::endl; // 0 ~ RANDMAX
    }

    // Generate a range between 0 and 10
    int random_num_range = std::rand() % 11;
    for(size_t i {0}; i < 20; ++i){
        random_num_range = std::rand() % 11;
        std::cout << "random_num_range " << i << ": " << random_num_range << std::endl; // 0 ~ 10
    }

    // Generate a range between 1 and 10
    int random_num_range_1 = std::rand() % 10 + 1;
    for(size_t i {0}; i < 20; ++i){
        random_num_range_1 = std::rand() % 10 + 1;
        std::cout << "random_num_range_1 " << i << ": " << random_num_range_1 << std::endl; // 1 ~ 10
    }

    return 0;
}