new_list = ["Hello", "World", "OG", "Nice"]

print(new_list[0])
print(new_list[1])
print(new_list[2])
print(new_list[-1])  # last element
print(new_list[-2])

# printing the entire list
print(new_list)

list1 = [1, 2, 3, 4, 5, 6]
print(list1)

# adding new item to the end using append() function

list1.append(9)
print(list1)

# extending using new lists
list1.extend(new_list)
print(list1)

# length of list

print("\n Length of List 1 is : ", len(list1))

# Nested list, Like multidimensional array
nested = [new_list, list1]
print("\nNested list : ", nested)

# wiping a list
nested = []
print("\nNested list : ", nested)

# Assigning a list
nested = new_list
print("\nNested list : ", nested)
