#include <iostream>

int main(){

    // Verbose nullptr check
    std::cout << std::endl;
    std::cout << "Verbose nullptr check: " << std::endl;

    int* p_number {}; // initialized to nullptr
    // p_number = new int(7);

    if(!(p_number == nullptr)){
        std::cout << "p_number points to a VALID address: " << p_number << std::endl;
        std::cout << "*p_number: " << *p_number << std::endl;
    }
    else{
        std::cout << "p_number points to an INVALID address" << std::endl;
    }

    if(p_number){
        std::cout << "p_number points to an VALID address: " << p_number << std::endl;
        std::cout << "*p_number: " << *p_number << std::endl;
    }
    else{
        std::cout << "p_number points to an INVALID address" << std::endl;
    }

    delete p_number;
    
    // It is OK to call delete on a nullptr so no need to check before deleting
    int* p_number1 {};
    delete p_number1;
    // if(p_number1 != nullptr){
    //     delete p_number1;
    // }

    return 0;
}