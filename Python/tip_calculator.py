print("\nWelcome to the tip calculator.")
bill = float(input("\nWhat was the total bill? : $"))
tip = int(input("\nEnter Percentage of Tip you want to give : "))
ppl = int(input("\nHow many people to split the bill? : "))

amount = bill + ((tip/100) * bill)
amount = amount/ppl
amount = round(amount, 2)

# The code above this line is correct but if we give input 150,12,5 then output is $33.6
#  but we want $33.60 so we use formatting
amount = "{:.2f}".format(amount)
print(f"\nEach person should pay : ${amount}")
