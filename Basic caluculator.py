 def calculate(num1, operation, num2):
    if operation == "+":
        c=num1 + num2
        return c
    if operation == "-":
        c=num1 - num2
        return c
    if operation == "*":
        c=num1 * num2
        return c
    if operation == "/":
        if num2 == 0:
            c=None
            return c
        c=num1 / num2
        return c
    else:
        return None
