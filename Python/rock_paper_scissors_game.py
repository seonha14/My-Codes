import random

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''
paper = '''
   _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''
scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
actions = [rock, paper, scissors]

user_selection = int(input('''
Enter your selection
1 : Rock
2 : Paper
3 : Scissors
'''))

if user_selection == 1:
    user_selection = rock
elif user_selection == 2:
    user_selection = paper
elif user_selection == 3:
    user_selection = scissors
else:
    print("\nWrong choice")
    exit()

computer_selection = random.choice(actions)

print(f"Your Hand : \n{user_selection}")
print(f"Computer's Hand : \n{computer_selection}")

if computer_selection == user_selection:
    print("\nIt's a draw.\n")
elif computer_selection == scissors and user_selection == paper:
    print("\nYou lose.\n")
elif computer_selection == rock and user_selection == scissors:
    print("\nYou lose.\n")
elif computer_selection == paper and user_selection == rock:
    print("\nYou lose.\n")
else:
    print("\nYou win.\n")
