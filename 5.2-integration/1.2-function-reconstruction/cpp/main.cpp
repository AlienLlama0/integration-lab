#include <iostream>
#include <cmath>
#include "input.h"

using namespace std;

float evaluate(float x, float c=0){
    float eqn = 3 * x * x + 4 * x + c;
    return eqn;
}

float find_c(float x, float f_x){
    float c = f_x  - evaluate(x);
    return c;
}

bool verify_c(float x, float f_x, float c){
    float eqn = 3 * x * x + 4 * x + c;
    if(fabs(f_x - eqn) < 1e-5) return true;
    else return false;
}

int main(){
    string der_str = "6x + 4\n";
    cout << "Derivative: " << der_str;

    float i_x = input_float("Enter initial x: ");
    float f_x = input_float("Enter initial f(x): ");

    float c = find_c(i_x, f_x);
    
    cout << "Initial condition: \n";
    cout << "f(" << i_x << ") = " << c << "\n";

    float x = input_float("Enter x: ");

    cout << "Reconstructed function: \n";

    if(fabs(c) < 1e-5) cout << "f(x) = 3x^2 + 4x" << "\n";
    else cout << "f(x) = 3x^2 + 4x" << (c < 0 ? " - " : " + ") << abs(c) << "\n";

    cout << "Result: " << evaluate(x, c) << "\n";

    cout << (verify_c(i_x, f_x, c) ? "Initial condition verified." : "Initial not condition verified.") << "\n";
}