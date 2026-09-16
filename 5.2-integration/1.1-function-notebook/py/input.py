from util import validate_float, validate_range

def input_option(msg:str, start:int, end:int, input_msg:str="Enter Option: ") -> int:
    print(msg)
    option = input(input_msg)

    while(not validate_range(start=start, end=end, i=option)):
        print(f"Invalid Input! Range must be between {start} to {end}")
        option = input("Input : ")

    return int(option)

def input_float(msg:str="Enter a number : ") -> int:
    value = input(msg)

    while(not validate_float(value)):
        print(f"Invalid Input! It must be a number")
        value = input(msg)

    return float(value)