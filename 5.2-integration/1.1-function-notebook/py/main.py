from input import *

# Task 1
def evaluate(x):
    eqn = 2 * x ** 3 + 4 * x - 7
    print("Output:", eqn)
    return eqn

# Task 2
def fucntion_1(x):
    eqn = 2 * x ** 3 + 4 * x - 7
    print("Result:", eqn)
    return eqn

def fucntion_2(x):
    eqn = 3 * x ** 2 + 5 * x - 2
    print("Result:", eqn)
    return eqn

def fucntion_3(x):
    eqn = x ** 4 + 2 * x ** 2 + 1
    print("Result:", eqn)
    return eqn

def fucntion_4(x):
    eqn = 7 * x - 3
    print("Result:", eqn)
    return eqn

def fucntion_5(x):
    eqn = 5 * x ** 3 - 2 * x + 9
    print("Result:", eqn)
    return eqn

# Task 3
def take_inputs():
    msg = """
Select a function to compute (1-5):

1. 2x^3+4x-7
2. 3x^2-5x+2
3. x^4-2x^2+1
4. 7x-3
5. 5x^3-2x+9
        """
    
    option = input_option(msg, 1, 5,  "Choose Equation: ")
    x = input_float("Enter value of x : ")
    match option:
        case 1:
            return fucntion_1(x)
        case 2:
            return fucntion_2(x)
        case 3:
            return fucntion_3(x)
        case 4:
            return fucntion_4(x)
        case 5:
            return fucntion_5(x)

def main():
    evaluate(2)
    take_inputs()


if __name__ == "__main__":
    main()
