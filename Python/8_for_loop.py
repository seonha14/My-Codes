# With list
sample_list = ["hello", "world", "python", "ubuntu"]
for x in sample_list:
    print(x)

# With range
for number in range(1, 20):
    print(number)

print("\nWith steps of 5\n")
# Range with custom steps
for number in range(1, 20, 5):
    print(number)

# sum of even between 1 t0 100 including 1 and 100
sum = 0
for i in range(0, 101, 2):
    sum += i
print(f"\n\nSum : {sum}\n")

# While loop
a = 5
while a > 0:
    print(a)
    a = a-1
