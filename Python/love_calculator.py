banner = '''

█░░ █▀█ █░█ █▀▀     █▀▀ ▄▀█ █░░ █▀▀ █░█ █░░ ▄▀█ ▀█▀ █▀█ █▀█
█▄▄ █▄█ ▀▄▀ ██▄     █▄▄ █▀█ █▄▄ █▄▄ █▄█ █▄▄ █▀█ ░█░ █▄█ █▀▄

'''
print(banner, '\n')
name1 = input("Enter first name : ")
name2 = input("Enter second name : ")

# lower() function converts all uppercase letters to lowercase
ln1 = name1.lower()
ln2 = name2.lower()

# count("") function counts the occurance of a letter (for now, maybe string later)

first_digit = 0
first_digit = ln1.count("t")+ln1.count("r")+ln1.count("u")+ln1.count("e") + \
    ln2.count("t")+ln2.count("r")+ln2.count("u")+ln2.count("e")

second_digit = 0
second_digit = ln1.count("l")+ln1.count("o")+ln1.count("v")+ln1.count("e") + \
    ln2.count("l")+ln2.count("o")+ln2.count("v")+ln2.count("e")


score = str(first_digit) + str(second_digit)


if int(score) < 10 or int(score) > 90:
    print(f"Your score is {score}, you go together like coke and mentos")
elif int(score) >= 40 and int(score) <= 50:
    print(f"Your score is {score}, you're alright together")
else:
    print(f"Your score is {score}")
