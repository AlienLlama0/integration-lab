#include "input.h"

int input_option(int start, int end, std::string msg, std::string input_msg="Choose Option: "){
    std::cout << msg;
    int option;

    while(true){
        std::cout << input_msg;
        std::cin >> option;

        if(option < start || option > end || std::cin.peek() != '\n'){
            std::cout << "Invalid option! Choose between " << start << " to " << end << "\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        
        return option;
    }
}

float input_x(std::string msg="Enter value: "){
    float value;

    while(true){
        std::cout << msg;
        std::cin >> value;

        if(std::cin.fail() || std::cin.peek() != '\n'){
            std::cout << "Invalid input! Value must be a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        
        return value;
    }
}

