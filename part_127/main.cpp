#include <iostream>

int main(){

    const char* const students [] {
        "Daniel Gray",
        "Tuna Philbe"
    };

    // Print out the students
    std::cout << std::endl;
    std::cout << "Printing out the students: " << std::endl;
    for(const char* student : students){
        std::cout << student << std::endl;
    }

    // *students[0] = 'K';

    // Can swap for new student though
    const char* students1 [] {
        "Daniel Gray",
        "Tuna Philbe"
    };
    const char* new_student {"Bob the Great"};
    students1[0] = new_student; // compiler error

    // Print out the students
    std::cout << "Printing out the students: " << std::endl;
    for(const char* student : students1){
        std::cout << student << std::endl;
    }

    return 0;
}