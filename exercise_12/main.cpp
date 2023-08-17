#include <iostream>

void hunt_for_vowels(char message[], unsigned int size){
    

    unsigned int vowel_count{};//Initialized to zero
  
    //Don't modify anything above this line
    //Your code should go below this line

    char vowel_array [] {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    bool is_vowel {false};

    for(size_t i {0}; i < size; ++i){
        for(size_t j {0}; j < std::size(vowel_array); ++j){
            if(vowel_array[j] == message[i]){
                is_vowel = true;
                break;
            }
        }
        if(is_vowel == true){
            ++vowel_count;
            is_vowel = false;
        }
    }
  
    //Your code should go above this line
    //Don't modify anything below this line
  
  
    std::cout << "The string : " << message << " has " << vowel_count << " vowels";
    
}


int main(){

    char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l',
    'u','e',' ','m','y',' ','f','r','i','e','n','d'};
    // char message[] {'a', 'e', 'z'};
    
    hunt_for_vowels(message, std::size(message));

    return 0;

}