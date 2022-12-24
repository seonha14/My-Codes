import random

a = random.randint(1, 100)
print(f"A random number : ", a)

random_float = random.random()  # returns a random float between 0 to 1 [0,1)
print(f"Random float : {random_float}")

random_float = random_float + 1
print(random_float)
