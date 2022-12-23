var = int(input("Enter an integer : "))

# and operator as && ALSO 7
if var > 5 and var < 10:
    print("Greater than 5 and less than 10.")
elif var == 10 & var != 20:
    print("It is 10.")
elif var > 10 and var < 20:
    print("Greater than 10 and less than 20.")
# or operator as ||
elif var == 10 or var == 20:
    print("It is either 10 or 20.")

# not operator as !
print(not 20)
