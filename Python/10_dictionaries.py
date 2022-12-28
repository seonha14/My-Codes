# pair a peice of information

Operating_Systems = {
    # Key : Value
    "Linux": "Linux is free and open-source operating system",
    "Mac": "macOS is for Apple machines",
    "Windows": "Windows is the most widely used operating system"
}

# Retreiving data from list
print("\n")
print(Operating_Systems["Linux"])
print("\n")
print(Operating_Systems["Mac"])
print("\n")
print(Operating_Systems["Windows"])
print("\n")

Keys = {12: "Being nice.", "hello": 12}
print(Keys["hello"])
print(Keys[12])

# Adding more data

Keys["New Key"] = "New Value"

# printing the entire Dictionary
print("\n")
print(Keys)

# creating an empty dictionary
empty_dict = {}
print(empty_dict)

# wiping a dictionary
Keys = {}
print("\n")
print(Keys)

# edit an item
Operating_Systems["Linux"] = "Just free and does the job."
print(Operating_Systems)


# loop through a dict

for key in Operating_Systems:
    print(key)
    print(Operating_Systems[key])
