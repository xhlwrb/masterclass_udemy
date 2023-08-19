#include <iostream>

void shoot_forward( int data[], unsigned int offset){
    
    //Don't modify anything above this line
    //Your code will go below this line

    std::cout << "The element " << offset << " slots away from the beginning is : "
            << *(data + offset);

    //Your code will go above this line
    //Don't modify anything below this line
}

int main(){

    int data[] {1,3,6,3,9,3,5,7,2,11};
    shoot_forward(data, 3);

    return 0;
}