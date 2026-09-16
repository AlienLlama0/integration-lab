#include <iostream>
#include <string>
#include <cmath>
#include "input.cpp"

using namespace std;



// Task 1
void evaluate(float x){
    float eqn = 2 * pow(x, 3) + 4 * x - 7;
    cout << eqn << "\n";
}

// Task 2
float function_1(float x){
    float eqn = 2 * pow(x, 3) + 4 * x - 7;
    cout << "Result: " << eqn << "\n";
    return eqn;
}

float function_2(float x){
    float eqn = 3 * pow(x, 2) - 5 * x + 2;
    cout << "Result: " << eqn << "\n";
    return eqn;
}

float function_3(float x){
    float eqn = pow(x, 4) - 2 * pow(x, 2) + 1;
    cout << "Result: " << eqn << "\n";
    return eqn;
}

float function_4(float x){
    float eqn = 7 * x - 3;
    cout << "Result: " << eqn << "\n";
    return eqn;
}

float function_5(float x){
    float eqn = 5 * pow(x, 3) - 2 * x + 9;
    cout << "Result: " << eqn << "\n";
    return eqn;
}

// Task 3
void take_input(){
    string msg = R"(Select a function to compute (1-5):
1. 2x^3+4x-7
2. 3x^2-5x+2
3. x^4-2x^2+1
4. 7x-3
5. 5x^3-2x+9

)";

    int option = input_option(1, 5, msg);
    float x = input_x("Enter value of x: ");

    switch(option){
        case 1:
            function_1(x);
            break;
        case 2:
            function_2(x);
            break;
        case 3:
            function_3(x);
            break;
        case 4:
            function_4(x);
            break;
        case 5:
            function_5(x);
            break;
    }
}

int main(){
    take_input();
    return 0;
}