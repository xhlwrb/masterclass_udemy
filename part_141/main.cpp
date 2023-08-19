#include <iostream>

int main(){

    const size_t size {10};

    // Different ways you can declare an array dynamically and how they are initialized

    double* p_salaries {new double[size]};
    
    int* p_students {new(std::nothrow) int[size] {}}; // all values initialized to 0

    double* p_scores {new(std::nothrow) double[size] {1, 2, 3, 4, 5}}; // rest will be 0s

    // nullptr check and use the allocated array
    if(p_scores){
        std::cout << "size of scores(it's a regular pointer): " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores" << std::endl;

        // Print out elements. Can use regular array access notation, or pointer arithmetic
        for(size_t i {}; i < size; ++i){
            std::cout << "value: " << p_scores[i] << ": " << *(p_scores + i) << std::endl;
        } 
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;

    // Static arrays vs dynamic arrays
    std::cout << "================================" << std::endl;

    int scores[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // lives on the stack
    std::cout << "scores size: " << std::size(scores) << std::endl;
    for(auto s : scores){
        std::cout << "value: " << s << std::endl;
    }

    int* p_scores1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // lives on the heap
    // std::cout << "p_scores1 size: " << std::size(p_scores) << std::endl;
    // for(auto s : p_scores1){
    //     std::cout << "value: " << s << std::endl;
    // }

    return 0;
}