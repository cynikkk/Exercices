import random

randomNumber = random.randint(1, 9)

continuePlaying = "y"

while continuePlaying != "n":
    number = int(input("Guess the number (1-9): "))

    if number == randomNumber:
        print("Got it !")
        continuePlaying = input("Would you like to do another game (y/n) ? ")
        randomNumber = random.randint(1, 9)
    elif number < randomNumber:
        print("Too low")
    else:
        print("Too high")