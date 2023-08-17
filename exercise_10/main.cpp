#include <iostream>

void unique_numbers( int numbers[], unsigned int collection_size){
    
   //Don't modify anthing above this line
   //Your code should go below this line
    unsigned int results [20];
    unsigned int length_of_results {0};
    bool shown_before = false;
    
    for(size_t i {0}, j{0}; i < collection_size; ++i){
        // if not shown before
        for(size_t k {0}; k < j; ++k){
            if(results[k] == numbers[i]){
                // shown before
                shown_before = true;
                break;
            }
        }
        if(!shown_before){
            results[j] = numbers[i];
            ++j;
            length_of_results = j;
        }
        else{
            shown_before = false;
        }
    }
    std::cout << "The collection contains " << length_of_results << " unique numbers, they are: ";
    for(size_t i {0}; i < length_of_results; ++i){
        std::cout << results[i] << " ";
    }
   
  
  //Your code should go above this line
  //Don't modify anything below this line
    
    
    
    
}

int main(){

    int list_num [] {7,5,7,2,4,1,7,4,2};
    unique_numbers(list_num, 9);

    return 0;
}