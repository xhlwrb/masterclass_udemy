#include <iostream>

int*  minimum_address( int data[], unsigned int size){

    int * min_address;

    // Don't modify anything above this line
    //Your code should go below this line
    //REMEMBER !ONLY POINTER ARITHMETIC SHOULD BE USED TO ACCESS ARRAY DATA
    int min_value = *data;

    for(size_t i {}; i < size; ++i){
        if(*(data + i) < min_value){
            min_value = *(data + i);
            min_address = data + i;
        }
    }

    //Your code should go above this line
    //Don't modify anything below this line

    return min_address;
}

int main(){

    int data[] {11,2,52,53,9,13,5,7,12,11};

    minimum_address(data, std::size(data));

    return 0;
}