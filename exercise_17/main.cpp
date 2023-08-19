#include <iostream>

void merge_arrays(int data1[], int data2[],
           unsigned int size1, unsigned int size2){

    //Don't modify anything above this line
    //Your code will go below this line

    // int new_array[] {};
    // int* new_array_pointer {new_array};

    // for(size_t i {}; i < size1; ++i){
    //     new_array_pointer = (data1 + i);
    //     std::cout << *new_array_pointer << " ";
    //     ++new_array_pointer;
    // }

    // for(size_t i {}; i < size2; ++i){
    //     new_array_pointer = (data2 + i);
    //     std::cout << *new_array_pointer << " ";
    //     ++new_array_pointer;
    // }

    int * new_array = new int [size1 + size2]; // Allocate the larger array dynamically : RECOMMENDED!

    //int new_array[size1 + size2]; // Try this in your environment and your IDE/Editor may give you 
                                    // Squiggly lines to signal something being wrong.

    for(unsigned int i{}; i < (size1 + size2); ++i){
      if(i < size1){
        new_array[i] = data1[i];
      }else{
        new_array[i] = data2[i-size1];
      }
    }

    //Print the new array
    for(unsigned int i{}; i < (size1 + size2); ++i){
      std::cout << new_array[i] << " ";
    }
    
    delete[] new_array;

    //Your code will go above this line
    //Don't modify anything below this line


}

int main(){

    int data1[] {1,2,3,4,5,66,77};
    int data2[] {10,20,30,40,50,60};

    merge_arrays(data1, data2, std::size(data1), std::size(data2));


    return 0;
}