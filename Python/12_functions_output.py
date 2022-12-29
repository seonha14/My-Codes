def format_name(first_name, last_name):
    # title() fn. converts to name format
    full_name = first_name.title() + " " + last_name.title()
    return full_name


name = input("Enter a name : ")
name_list = name.split(" ")
name = format_name(name_list[0], name_list[1])

print(f"Formatted name : {name}")
