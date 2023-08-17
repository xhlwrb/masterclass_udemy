#include <iostream>

bool is_collection_sorted(int numbers[], unsigned int collection_size){


    // Don't modify anything above this line
    //Your code will go below this line
 
    bool sorted {true};

    for(size_t i {1}; i < collection_size; ++i){
        if(numbers[i] < numbers[i-1]){
            // not incrementing
            sorted = false;
            break;
        }
    }

    //Your code will go above this line
    //Don't modify anything below this line

    return sorted;
}

int main(){

    int data[] {1,112,4,5,8,12,13,16,71,92};

    std::cout << std::boolalpha;
    std::cout << is_collection_sorted(data, std::size(data)) << std::endl;

}