#include <iostream>

int main(){

    int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int* p_score {scores};
    // array name can be treated as a pointer to the first element in the array

    // Print the address
    std::cout << "scores: " << scores << std::endl; // Array
    std::cout << "p_score: " << p_score << std::endl; // Pointer
    std::cout << "&scores[0]: " << &scores[0] << std::endl;

    // Print the content at the address
    std::cout << std::endl;
    std::cout << "Printing out data at array address: " << std::endl;
    std::cout << "*scores: " << *scores << std::endl;
    std::cout << "scores[0]: " << scores[0] << std::endl;
    std::cout << "*p_score: " << *p_score << std::endl;
    std::cout << "p_score[0]: " << p_score[0] << std::endl;

    // Differences
    int number {21};
    p_score = &number;
    // scores = &number; // The array name can be treated as a pointer, but is not actually a pointer
    std::cout << "p_score: " << p_score << std::endl; // Pointer
    // std::size() doesn't dowk for raw pointers
    std::cout << "size: " << std::size(scores) << std::endl;
    // std::cout << "size: " << std::size(p_score) << std::endl;

    return 0;
}