#include <iostream>

int main(){

    int today {};
    int passed {};

    std::cout << "Which day is today [1: Monday,..., 7: Sunday]: " << std::endl;
    std::cin >> today;

    if(today < 1 || today > 7) {
        std::cout << today << " is not a valid day. Bye!" << std::endl;
        return 0;
    }
    else {
        std::cout << "How many days have passed up to today:" << std::endl;
        std::cin >> passed;
    }

    switch(today) {
        case 1: {
            std::cout << "Today is Monday" << std::endl;
        }
        break;

        case 2: {
            std::cout << "Today is Tuesday" << std::endl;
        }
        break;

        case 3: {
            std::cout << "Today is Wednesday" << std::endl;
        }
        break;

        case 4: {
            std::cout << "Today is Thursday" << std::endl;
        }
        break;

        case 5: {
            std::cout << "Today is Friday" << std::endl;
        }
        break;

        case 6: {
            std::cout << "Today is Saturday" << std::endl;
        }
        break;

        case 7: {
            std::cout << "Today is Sunday" << std::endl;
        }
        break;

        default:
        break;
    }

    int new_passed = passed % 7;
    int new_day = today - new_passed ;
    switch(new_day) {
        case 3: {
            // 3
            std::cout << "If we went " << passed << " days in the past we should hit a Wednesday" << std::endl;
        }
        break;

        case 2: {
            // 2
            std::cout << "If we went " << passed << " days in the past we should hit a Tuesday" << std::endl;
        }
        break;

        case 1: {
            // 1
            std::cout << "If we went " << passed << " days in the past we should hit a Monday" << std::endl;
        } 
        break;

        case 0: {
            // 7
            std::cout << "If we went " << passed << " days in the past we should hit a Sunday" << std::endl;
        }
        break;

        case -1: {
            // 6
            std::cout << "If we went " << passed << " days in the past we should hit a Saturday" << std::endl;
        }
        break;

        case -2: {
            // 5
            std::cout << "If we went " << passed << " days in the past we should hit a Friday" << std::endl;
        }
        break;

        case -3: {
            // 4
            std::cout << "If we went " << passed << " days in the past we should hit a Thursday" << std::endl;
        }
        break;

        default:
        break;
    }

    return 0;
}