def add(n1, n2):
    return n1+n2


def sub(n1, n2):
    return n1-n2


def mul(n1, n2):
    return n1*n2


def div(n1, n2):
    return round(n1/n2, 2)


operations = {
    '+': add,
    '-': sub,
    '*': mul,
    '/': div

}

num1 = int(input("Enter First Number : "))
num2 = int(input("Enter Second Number : "))

print("Select an operation")
for op in operations:
    print(op)

selected_op = input("")

answer = operations[selected_op](num1, num2)

print(f"{num1} {selected_op} {num2} = {answer}")
