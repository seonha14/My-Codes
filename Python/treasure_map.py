row1 = ['⬜', '⬜', '⬜']
row2 = ['⬜', '⬜', '⬜']
row3 = ['⬜', '⬜', '⬜']

map = [row1, row2, row3]

print(f"\t{row1}\n\n\t{row2}\n\n\t{row3}")

position = input("Enter treasure location : ")

row = int(position[0])
column = int(position[1])
map[row-1][column-1] = ' X'

print(f"\t{row1}\n\n\t{row2}\n\n\t{row3}")
