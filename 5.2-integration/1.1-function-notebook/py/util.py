# Reusable Separate file for input validation to make main code clean

def validate_float(num:str) -> bool:
    try:
        value: float = float(num)
        return True
    except Exception as e:
        print("Exception", e)
        return False

def validate_range(start:str, end:str, i:str) -> bool:
    try:
        start: int = int(start)
        end: int = int(end)
        i: int = int(i)
        if(i < start or i > end):
            return False
        return True
    except Exception as e:
        print("Exception", e)
        return False