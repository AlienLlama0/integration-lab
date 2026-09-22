#include <limits>
#include "input.h"

using std::string;
using std::cin;
using std::cout;

int input_float(string msg="Enter a value: "){
    float val;

    while(true){
        cout << msg;
        cin >> val;

        if(cin.fail() || cin.peek() != '\n'){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input! Try again.\n";
            continue;
        }
        return val;
    }

}