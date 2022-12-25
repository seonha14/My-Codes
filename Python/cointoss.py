import random
heads = "Heads"
tails = "Tails"
coin = [heads, tails]

print("\n\nTossing coin.....\n\n")
print(random.choice(coin), "\n\n")


# second method
print("\n\nTossing coin.....\n\n")
random_int = random.randint(0, 1)
if random_int == 1:
    print(heads)
else:
    print(tails)
