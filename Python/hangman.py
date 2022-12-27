import random
import os  # for clearing screen

# Function for displaying the list


def show(d):
    for i in d:
        print(i, end=" ")


# creating a wordlist to select from
word_list = ["Magnus", "Supreme", "Nike",
             "Badshah", "Habibi", "Hacker", "Books"]

# choosing a random word at runtime
chosen_word = random.choice(word_list).lower()

# creating a list called display and add as many underscores '_' as there are letters in the chosen word
display = []
for i in range(len(chosen_word)):
    display += "_"
# print("\n\n", display)
show(display)

# creating ascii stages
stages = ['''
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|   |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
  |   |
      |
      |
=========
''', '''
  +---+
  |   |
  O   |
      |
      |
      |
=========
''', '''
  +---+
  |   |
      |
      |
      |
      |
=========
''']

# creating total no. of lives user have based on total hangmans i.e. 6
lives = 6
# repeatedily asking for an input until the game ends
end_of_game = False
while not end_of_game:
    guess = input("\nGuess a letter of the word : ").lower()

    os.system('clear')
    if guess in display:
        print(f"\nYou've already guessed {guess}, try something else.")
    # revealing the correct guesses
    if guess not in chosen_word:
        print("\nYou guessed the wrong letter, You lose a life.")
        lives = lives-1
    else:
        for x in range(len(chosen_word)):
            if guess == chosen_word[x]:
                display[x] = guess
    # print(display)
    show(display)

    print(stages[lives])
    print(f"\n Remaining lives : {lives}")
    if lives == 0:
        end_of_game = True
        print("You lose.")
    if "_" not in display:
        end_of_game = True
        print("You win.")


# To be completed and the logic of replacing dashes must be followed as per the instructor
