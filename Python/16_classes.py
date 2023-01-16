class User:
    pass  # pass keyword used to skip


class Pop:
    # Constructor
    def __init__(self):
        print("Constructor is called.")


a = Pop()
a.name = "op"  # Adding attributes
print(a.name)
