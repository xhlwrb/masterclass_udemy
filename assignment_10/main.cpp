#include <iostream>
#include <ctime>

int main(){

    // srand() has to run once per program run
    std::srand(std::time(0)); // Seed

    int operand1 {};
    int operand2 {};
    char operation {};
    int typed_result {};
    int correct_result {};
    char y_n {'y'};
    const unsigned int MAX_NUMBER {200};

    while(y_n == 'y' or y_n == 'Y'){

        // generate random operand1 and operand2 from 0 to 199
        operand1 = std::rand() % MAX_NUMBER;
        operand2 = std::rand() % MAX_NUMBER;

        // generate random operation and calculate correct result
        operation = std::rand() % 3;
        switch(operation){
            case 0:
                operation = '+';
                correct_result = operand1 + operand2;
                break;
            case 1:
                operation = '-';
                correct_result = operand1 - operand2;
                break;
            case 2:
                operation = '*';
                correct_result = operand1 * operand2;
                break;
            default:
                break;
        }

        // show prompt
        std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;

        // ask for the result
        std::cout << "What's the result of " 
                << operand1 << " " << operation << " " << operand2 << ": ";

        // type in the result
        std::cin >> typed_result;

        // check if calculation correct
        if(typed_result == correct_result){
            // show congrats
            std::cout << "Congratulations! You got the result " << correct_result << " right!" << std::endl;
        }
        else{
            // show correct result
            std::cout << "Naah! The correct result is: " << correct_result << std::endl;
        }

        // ask if continue
        std::cout << "Do you want me to try again? (Y | N): ";
        std::cin >> y_n;
        // check if continue
        if(y_n == 'Y' || y_n == 'y'){
            // continue
        }
        else{
            // stop
            break;
        }  
    }

    return 0;
}