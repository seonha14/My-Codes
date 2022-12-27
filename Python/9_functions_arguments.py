def printer(a, b, c):
    print("\nPrinter working : ")
    print(f"a : {a}")
    print(f"b : {b}")
    print(f"c : {c}")
    print("\n")


printer(1, 2, 3)
printer(2, 3, 1)

# Keyword Arguments (By specifying the name)
printer(a=7, b=5, c=9)

# order does not matter in this
printer(b=5, c=9, a=2)
