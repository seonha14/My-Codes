year = int(input("Enter a year : "))

if year % 4 != 0:
    print("Not a leap year.")
else:
    if year % 100 != 0:
        print("It is a leap year.")
    else:
        if year % 400 != 0:
            print("Not a leap year.")
        else:
            print("It is a leap year.")

# Second approach


def is_leap(year):
    leap = False
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                leap = True
            else:
                leap = False
        else:
            leap = True

    return leap


year = int(input("Enter : "))
print(is_leap(year))
