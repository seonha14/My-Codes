# From the OOPS section:
# First install Packages from pypi.org
from prettytable import PrettyTable  # importing class

table = PrettyTable()
table.add_column("Language", ["Python", "Ruby", "C++", "C", "Java", "Kotlin", "Swift"])
table.add_column("Level", ["Beginner", "NA", "Intermediate", "Intermediate", "Advanced", "Beginner", "Beginner"])

# printing results; the 'table' object
print(table)

# printing attributes
print(table.align)

# changing attributes
table.align = 'l'
print('\n', table)

# PrettyTable : Adding items row by row
new_table = PrettyTable()
new_table.field_names = ["Tool", "Description"]
new_table.add_row(["Git", "Version control"])
new_table.add_row(["GitHub", "Hosting repo"])
new_table.add_row(["VSCode", "Code Editing"])
new_table.add_row(["Ubuntu", "Operating System"])

print('\n', new_table)
