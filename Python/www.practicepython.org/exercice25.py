from random import randint

# TODO
# - Enhance logic of computer
# - Fix bugs

tryCount = 0
prevNumber = 0
number = randint(0, 100)
answer = ''

print("Guess a number between 0 and 100, I'll try to find it !")
print("Higher = +, Lower = -, Found = f ")

while answer != 'f':
    prevNumber = number
    print("I'm guessing... " + str(number))

    answer = input("Answer : ")
    print(number)
    if answer == '+':
        number += randint(prevNumber, 100)
    elif answer == '-':
        number -= randint(0, prevNumber)
    elif answer == 'f':
        print("Got it ! I found in " + str(tryCount) + " attempts !")
    
    
    tryCount += 1