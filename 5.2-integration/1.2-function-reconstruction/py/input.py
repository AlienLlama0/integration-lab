from util import validate_float

def input_float(msg="Enter a value"):
    x = input(msg)

    while(not validate_float(x)):
        x = input(msg)

    return float(x)