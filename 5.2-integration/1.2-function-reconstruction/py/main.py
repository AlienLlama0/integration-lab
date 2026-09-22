import math
from input import input_float

# Task 2, 3, 4
def evaluate(x, c):
    print("Reconstructed Function:")
    if(c >= 0):print("3x^2 + 4x +", c)
    else: print("3x^2 + 4x -", c*-1)
    eqn = 3 * x ** 2 + 4 * x + c
    print("Result:", eqn)
    return eqn

def find_c(f_x, x):
    c = f_x - (3 * x ** 2 + 4 * x)
    print("C is:", c)

    return c

def verify(x, f_x, c):
    eqn = 3 * x ** 2 + 4 * x + c
    if(math.isclose(f_x, eqn)): print("Initial condition verified.")
    else: print("Initial condition not verified.")

def main():
    x: float = input_float("Enter initial x:")
    f_x: float = input_float("Enter initial f(x):")
    c= find_c(f_x, x)
    new_x = input_float("Enter value of x: ")
    evaluate(new_x, c)
    verify(x, f_x, c)
    

if __name__ == "__main__":
    main()
