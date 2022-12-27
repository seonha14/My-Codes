alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
logo = '''


░█▀▀█ █▀▀█ █▀▀ █▀▀ █▀▀█ █▀▀█ 　 ░█▀▀█ ─▀─ █▀▀█ █──█ █▀▀ █▀▀█ 
░█─── █▄▄█ █▀▀ ▀▀█ █▄▄█ █▄▄▀ 　 ░█─── ▀█▀ █──█ █▀▀█ █▀▀ █▄▄▀ 
░█▄▄█ ▀──▀ ▀▀▀ ▀▀▀ ▀──▀ ▀─▀▀ 　 ░█▄▄█ ▀▀▀ █▀▀▀ ▀──▀ ▀▀▀ ▀─▀▀

'''
print(logo)
# single function instead of two separate functions


def caesar(input_text, shift_amount, option):
    print("\n")
    output = ""
    for letter in input_text:
        if letter in alphabet:
            index = alphabet.index(letter)
            if option == 1:
                output += alphabet[index + shift_amount]
            elif option == 2:
                output += alphabet[index - shift_amount]
        else:
            output += letter
    if option == 1:
        print("Encrypted text : ", output)
    elif option == 2:
        print(f"Decrypted text : {output}")
    else:
        print("Wrong choice.")
    print("\n")


continue_running = True
while continue_running:
    # direction = input("Type 'encode' to encrypt, type 'decode' to decrypt:\n")
    direction = int(input('''
Options :
1. Encode Text
2. Decode Text

'''))

    text = input("\nType your message:\n\n").lower()

    shift = int(input("\nType the shift number:\n\n"))
    shift = shift % 26
    caesar(text, shift, direction)
    run = int(input('''
1. Run again
0. Exit
'''))
    if run == 0:
        continue_running = False
        print("Exiting...")


# def encrypt(plain_text, given_shift):
#     output = ''
#     for letter in plain_text:
#         # store the index of letter in a variable 'index'
#         index = alphabet.index(letter)
#         output += alphabet[index + given_shift]
#     print("Encrypted text : ", output)


# def decrypt(plaint_text, given_shift):
#     output = ""
#     for letter in plaint_text:
#         index = alphabet.index(letter)
#         output += alphabet[index - given_shift]
#     print(f"Decrypted text : {output}")


# if direction == 1:
#     encrypt(text, shift)
# elif direction == 2:
#     decrypt(text, shift)
# else:
#     print("Wrong choice.")
