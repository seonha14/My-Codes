# Global scope
variable = 5


def inc_var(var):
    # Function scope
    var = var + 1
    print("Global variable in fn : ", variable)
    print(f"Variable in function {var}")


inc_var(variable)
print(f"Variable in code {variable}")

# There is no block scope i.e. in if else etc. (That exists in C++)
# can create a new global variable inside if without declaring it earlier

if 3 < 5:
    new_varible = 5

# Accessing new variable outside the if
print("New variable in if : ", new_varible)

HELLO = 12

HELLO = 3
print(HELLO)
