def validate_float(value:str)->bool:
    try:
        value = float(value)
        return True
    except ValueError as e:
        print("Error: Invalid input.")
        return False