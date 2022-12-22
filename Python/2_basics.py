# name = input("State your name ")
# print("Your name has ", len(name), " characters")

# strings
print("Hello"[0])  # subscripting
print("Hello"[2])

# integers

print(12345)
print(12_345)  # both are evaluated as same

# Type Checking

print(type("Azeem"))

# Type conversion
name = "Azeem"
length = len(name)
new = str(length)

print("Your name has "+new + " characters")

print(5/2)  # It prints float by default
print(5//2)  # It prints integer only like C
print(2 ** 5)  # power operator

# Round Off

a = round(2.6)
print(a)

# rounding upto decimal
a = round(2.66666666, 2)
print(a)


#f- string
score = 0
height = 1.28
# fstring helps in writing strings without type conversion
print(f"Your score is {score} and height is {height}")
