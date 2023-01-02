# Global scope
variable = 5


def inc_var(var):
    # Local scope : i.e. Function scope
    var = var + 1
    print("Global variable in fn : ", variable)
    print(f"Variable in function {var}")


inc_var(variable)
print(f"Variable in code {variable}")

# There is no block scope i.e. in if else etc. (That exists in C++)
# can create a new global variable inside if without declaring it earlier

if 3 < 5:
    new_variable = 5

# Accessing new variable outside the if
print("New variable in if : ", new_variable)

# Modifying global varibales (Like using pointers in C++)
sample_Var = 1


def increase():
    global sample_Var
    sample_Var += 1


increase()
print("Increased Sample variable : ", sample_Var)

# alternate way of acheiving the same (without using the global keyword)


def increase_by1():
    return sample_Var + 1


sample_Var = increase_by1()
print(sample_Var)

# Constants
# Use all uppercase and do not modify it

PI = 3.14
URL = 'https://something.com'
