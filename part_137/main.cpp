#include <iostream>

int main(){

    // Case1: uninitialized pointer
    // int* p_number; // dangling uninitialized pointer
    // std::cout << std::endl;
    // std::cout << "Case 1: uninitialized pointer: " << std::endl;
    // std::cout << "*p_number: " << *p_number << std::endl; // CRASH

    // Case 2: deleted pointer
    std::cout << std::endl;
    std::cout << "Case 2: deleted pointer: " << std::endl;
    int* p_number1 {new int {67}};
    std::cout << "*p_number1 (before delete): " << *p_number1 << std::endl;
    delete p_number1;
    std::cout << "*p_number1(after delete): " << *p_number1 << std::endl;

    // Case 3: multiple pointers pointing to same address
    std::cout << std::endl;
    std::cout << "Case 3: multiple pointers pointing to same address: " << std::endl;
    int* p_number3 {new int {83}};
    int* p_number4 {p_number3};

    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    // Deleting p_number3
    delete p_number3;

    // p_number4 points to deleted memory, deleteting it leads to undefined behaviour
    std::cout << "p_number4(after deleting p_number3): " << p_number4 << " - " << *p_number4 << std::endl;

    // Solution 1: initialize your pointers immediately after declaration
    std::cout << std::endl;
    std::cout << "Solution 1: " << std::endl;
    int* p_number5 {nullptr};
    int* p_number6 {new int {87}};

    // Check for nullptr before use
    if(p_number6 != nullptr){
        std::cout << "*p_number6: " << *p_number6 << std::endl;
    }
    else{
        std::cout << "Invalid address" << std::endl;
    }

    // Solution 2: right after you call delete on a pointer, remember to reset the pointer to nullptr
    std::cout << std::endl;
    std::cout << "Solution 2: " << std::endl;
    int* p_number7 {new int {82}};

    // Use pointer however you want
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;

    delete p_number7;
    p_number7 = nullptr; // reset the pointer
    
    // Check for nullptr before use
    if(p_number7 != nullptr){
        std::cout << "*p_number7: " << *p_number7 << std::endl;
    }
    else{
        std::cout << "Invalid memory access!" << std::endl;
    }
    
    // Solution 3: For multiple pointers pointing to the same address, make sure there is a master pointer
    // that owns the memory
    std::cout << std::endl;
    std::cout << "Solution 3: " << std::endl;
    int* p_number8 {new int {382}}; // master pointer
    int* p_number9 {p_number8};

    // Dereference the pointers and use them
    std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std::endl;

    if(!(p_number8 == nullptr)){
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }

    delete p_number8;
    p_number8 = nullptr;

    if(!(p_number8 == nullptr)){
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }
    else{
        std::cerr << "WARNING: Trying to use an invalid pointer" << std::endl;
    }

    return 0;
}