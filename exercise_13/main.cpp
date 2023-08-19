#include <iostream>

void common_elements(int array_1[], int array_2[]){
    // REMEMBER, The input arrays array_1 and array_2 have a fixed size of 10
   
    //Don't modify anything above this line
    //Your code will go below this line

    const unsigned int ARRAY_SIZE {10};
    unsigned int common_size {0};
    int common_array[ARRAY_SIZE+1] {};

    for(size_t i {0}; i < ARRAY_SIZE; ++i){
        for(size_t j {0}; j < ARRAY_SIZE; ++j){
            if(array_2[j] == array_1[i]){
                // have in common
                common_array[common_size] = array_2[j];
                ++common_size;
                break;
            }
        }
    }

    if(common_size == 0){
        std::cout << "There are 0 common elements";
    }
    else{
        std::cout << "There are " << common_size << " common elements they are: ";
        for(size_t i {0}; i < common_size; ++i){
            std::cout << common_array[i] << " ";
        }
    }

    //Your code will go above this line
    //Don't modify anything after this line

}

int main(){

    int data1[] {1,2,4,5,9,3,6,7,44,55}; 
    int data2[] {11,2,44,45,49,43,46,47,55,88};

    common_elements(data1, data2);

    return 0;
}