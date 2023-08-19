#include <iostream>
#include <ctime>

int main(){

    // srand() has to run once per program run
    std::srand(std::time(0)); // Seed

    // char prediction0[]{ "a lot of kinds running in the backyard!" };
    // char prediction1[]{ "a lot of empty beer bootles on your work table." };
    // char prediction2[]{ "you Partying too much with kids wearing weird clothes." };
    // char prediction3[]{ "you running away from something really scary" };
    // char prediction4[]{ "clouds gathering in the sky and an army standing ready for war" };
    // char prediction5[]{ "dogs running around in a deserted empty city" };
    // char prediction6[]{ "a lot of cars stuck in a terrible traffic jam" };
    // char prediction7[]{ "you sitting in the dark typing lots of lines of code on your dirty computer" };
    // char prediction8[]{ "you yelling at your boss. And oh no! You get fired!" };
    // char prediction9[]{ "you laughing your lungs out. I've never seen this before." };

    char predictions [] [90] {
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before." ,
        "Uhm , I don't see anything!"
    };

    const int MAX_LENGTH {15};
    char name[MAX_LENGTH] {};
    bool again {true};
    char y_n {};
    unsigned int predict_num {0};

    // print out prompt
    std::cout << "What's your name dear:" << std::endl;

    // read name
    std::cin.getline(name, MAX_LENGTH);

    while(again == true){
        // generate random prediction num from 0 to 9
        predict_num = std::rand() % 10;

        // print out prediction
        std::cout << "Oh dear " << name << ", I see " << predictions[predict_num] << std::endl;

        // ask for continue
        std::cout << "Do you want me to try again? (Y | N): ";
        std::cin >> y_n;

        // check if continue
        if(y_n == 'Y' || y_n == 'y'){
            again = true;
        }
        else if(y_n == 'N' || y_n == 'n'){
            again = false;
            break;
        }
    }
    
    std::cout << "That's all I have for you today dear. Best wishes." << std::endl;



    return 0;
}