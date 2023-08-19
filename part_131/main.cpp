#include <iostream>

int main(){

    // Increment/Decrement pointer addresses manually
    int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    // scores++;

    int* p_score {scores};

    std::cout << "Values in scores array(p_score pointer increment): " << std::endl;
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << "Address: " << p_score << " value: " << *(p_score) << std::endl;
    ++p_score; // move forward by sizeof(int)
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Explicit addition of integer: " << std::endl;
    p_score = scores; // reset the pointer to the start of the array
    std::cout << "scores[4]: " << *(p_score + 4) << std::endl; // move forward by 4 * sizeof(int)

    // Can use loops to print these things out
    p_score = scores;
    std::cout << std::endl;
    std::cout << "Pointer arithmetic on p_score pointer and a for loop: " << std::endl;
    for(size_t i {}; i < std::size(scores); ++i){
        std::cout << "value: " << *(p_score + i) << std::endl; // scores[i]
    }

    // Can also do arithmetic on the array name just like pointer
    p_score = scores;
    std::cout << std::endl;
    std::cout << "Pointer arithmetic on array name:" << std::endl;
    for(size_t i {}; i < std::size(scores); ++i){
        std::cout << "value: " << *(scores + i) << std::endl;
    }

    // Can print the elements in reverse order
    std::cout << std::endl;
    std::cout << "Elements in reverse order with decrementing pointer arithmetic: " << std::endl;
    for(size_t i {std::size(scores)}; i > 0; --i){
        std::cout << "value: " << *(scores + i - 1) << std::endl;
    }

    // Print in reverse order with --operator on p_score
    std::cout << std::endl;
    std::cout << "Elements in reverse order -- arithmetic on the p_score pointer: " << std::endl;
    p_score = scores + std::size(scores) - 1;
    for(size_t i {std::size(scores)}; i > 0; --i){
        std::cout << "value: " << *(p_score--) << std::endl;
    }

    // Can print the elements in reverse order with array index
    std::cout << std::endl;
    std::cout << "Elements in reverse order with array index: " << std::endl;
    for(size_t i {std::size(scores)}; i > 0; --i){
        std::cout << "value: " << scores[i-1] << std::endl;
    }
    
    p_score = scores;
    scores[0] = 31; // array index notation
    *(scores + 1) = 32; // equivalent to scores[1] = 32
    *(p_score + 2) = 33; // equivalent to scores[2] = 33
    std::cout << std::endl;
    std::cout << "Printing out the array after modification of 3 first elements: " << std::endl;
    for(size_t i {}; i < std::size(scores); ++i){
        std::cout << "value: " << scores[i] << std::endl;
    }

    return 0;
}