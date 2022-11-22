print("Welcome to the tip calculator.")
bill = float(input("What was the total bill? : $"))
tip = int(input("Enter Percentage of Tip you want to give : "))
ppl = int(input("How many people to split the bill? : "))

amount = bill + ((tip/100) * bill)
amount = amount/ppl
amount = round(amount, 2)

# The code above this line is correct but if we give input 150,12,5 then output is $33.6
#  but we want $33.60 so we use formatting
amount = "{:.2f}".format(amount)
print(f"Each person should pay : ${amount}")
