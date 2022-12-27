def isPrime(n):
    Not_Prime = False
    for i in range(2, n):
        if n % i == 0:
            Not_Prime = True

    if Not_Prime:
        print("\nNot a prime number")
    else:
        print("It is a prime number")


number = int(input("Enter a number : "))
isPrime(number)
