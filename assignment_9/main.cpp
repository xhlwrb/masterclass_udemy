#include <iostream>
#include <iomanip>

int main(){
    unsigned int year {0};
    unsigned int first_day {0};
    unsigned int length_of_month {0};

    size_t week_day {1}, month_day {1};

    std::cout << "Enter a year: ";
    std::cin >> year;

    std::cout << "Enter the first day of the year [1: Monday, ..., 7: Sunday]: ";
    std::cin >> first_day;

    std::cout << "Calendar for " << year << std::endl;

    for(auto month : {"January", "February", "March", "April", "May", "June", 
                    "July", "August", "September", "October", "November", "December"}){
        std::cout << "--" << month << " " << year << " --" << std::endl;
        std::cout << std::setw(5) << "Mon" << std::setw(5) << "Tue" << std::setw(5) << "Wed" << std::setw(5) << "Thu" << std::setw(5)
                << "Fri" << std::setw(5) << "Sat" << std::setw(5) << "Sun" << std::endl;
        
        // print first row
        week_day = 1, month_day = 1;
        while(week_day < 8){
            if(week_day == first_day){
                std::cout << std::setw(5) << month_day;
                ++month_day;
            }
            else{
                if(month_day == 1){
                    std::cout << std::setw(5) << " ";
                }
                else{
                    std::cout << std::setw(5) << month_day;
                    ++month_day;
                }
            }
            ++week_day;
        }
        std::cout << std::endl;

        // print rest rows

        // check the length of a month
        if((month == "January") ||
            (month == "March")||
            (month == "May")||
            (month == "July")||
            (month == "August")||
            (month == "October")||
            (month == "December")){
            length_of_month = 31;
        }
        else if((month == "April") ||
                (month == "June")||
                (month == "September")||
                (month == "November")){
            length_of_month = 30;
        }
        // check leap year
        else if((month == "February")){
            if(year % 4 == 0){
                if(year % 100 == 0){
                    if(year % 400 == 0){
                        // leap year
                        length_of_month = 29;
                    }
                    else{
                        // not leap year
                        length_of_month = 28;
                    }
                }
                else{
                    // leap year
                    length_of_month = 29;
                }
            }
            else{
                // not leap year
                length_of_month = 28;
            }
        }

        // reset week_day
        week_day = 1;
        while(month_day <= length_of_month){
            // print each row
            week_day = 1;
            while(week_day < 8){
                std::cout << std::setw(5) << month_day;
                ++month_day;
                ++week_day;
                if(month_day > length_of_month){
                    break;
                }
            }
            std::cout << std::endl;
        }
        first_day = week_day;
        std::cout << std::endl;
    }

    return 0;
}