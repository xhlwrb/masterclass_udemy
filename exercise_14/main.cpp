#include <iostream>


int*  maximum_address( int data[], unsigned int size){

    int * max_address;

    //Don't modify anything above this line
    //Your code will go below this line
    int max_value {};
    
    for(size_t i {0}; i < size; ++i){
        if(data[i] > max_value){
            max_value = data[i];
            max_address = &data[i];
        }
    }

    //Your code should go above this line
    //Don't modify anything after this line
    return max_address;
}


int main(){

    int data[] {181,82,22,53,19,1,51,217,12,11};

    maximum_address(data, std::size(data));

    return 0;
}