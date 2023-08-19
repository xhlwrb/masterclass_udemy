#include <iostream>

int main(){

    int arr0[5]{ 1,2,3,4,5 };
    int arr1[5]{ 6,7,8,9,10 };
    int * p_arr0 {arr0};
    int * p_arr1 {arr1};

    // Print arr0
    std::cout << "arr0: ";
    for(size_t i {}; i < std::size(arr0); ++i){
        std::cout << p_arr0[i] << " ";
    }
    std::cout << std::endl;
    
    // Print arr1
    std::cout << "arr1: ";
    for(size_t i {}; i < std::size(arr1); ++i){
        std::cout << p_arr1[i] << " ";
    }
    std::cout << std::endl;

    // Swapping data the hard way
    int temp[5];

    // Move data from arr1 to temp
    for(size_t i {}; i < std::size(arr1); ++i){
        temp[i] = arr1[i];
    }

    // Move data from arr0 to arr1
    for(size_t i {}; i < std::size(arr0); ++i){
        arr1[i] = arr0[i];
    }

    // Move data from temp to arr0
    for(size_t i {}; i < std::size(temp); ++i){
        arr0[i] = temp[i];
    }

    // Print arr0
    std::cout << "arr0: ";
    for(size_t i {}; i < std::size(arr0); ++i){
        std::cout << p_arr0[i] << " ";
    }
    std::cout << std::endl;
    
    // Print arr1
    std::cout << "arr1: ";
    for(size_t i {}; i < std::size(arr1); ++i){
        std::cout << p_arr1[i] << " ";
    }
    std::cout << std::endl;

    // int* p_temp {nullptr};
    // p_temp = arr1;
    // arr1 = arr0;
    // arr0 = p_temp;

    int* p_temp {nullptr};
    p_temp = p_arr0;
    p_arr0 = p_arr1;
    p_arr1 = p_temp;


    // Print arr0
    std::cout << "arr0: ";
    for(size_t i {}; i < std::size(arr0); ++i){
        std::cout << p_arr0[i] << " ";
    }
    std::cout << std::endl;
    
    // Print arr1
    std::cout << "arr1: ";
    for(size_t i {}; i < std::size(arr1); ++i){
        std::cout << p_arr1[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}