import random

members = input("\nEnter the name separated by a comma and a space \n")

name_list = members.split(", ")

print(f"{random.choice(name_list)} will pay the bill.\n")

# alternative method
range = len(name_list)
person = random.randint(0, range-1)
print(f"{name_list[person]} will pay the bill.\n")
