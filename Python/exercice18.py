import random
""" TODO:
* Fix all bugs, god 
"""

def generateFourDigits():
    return random.randint(1, 9)

def difference(a, b):
    return (a > b) - (a < b)

def main():
    print("Welcome to the Cows an Bulls game !")
    print("Good digit in correct place : +1 cow")
    print("Good digit in wrong place : +1 bull")

    cow = 0
    bull = 0
    number = []
    for i in range(4):
        number.append(generateFourDigits()) 

    # Debug purposes
    print(number)
    
    # Game loop
    while True:
        # Draw score + asks for an answer
        print(str(cow) + " cows, " + str(bull) + " bulls")
        answer = int(input("Enter a number : "))

        # We need to convert answer as a list
        answer = [int(num) for num in str(answer)]

        if difference(number, answer) != 0:
            for i in range(4):
                # If good digit & correct place
                if answer[i] == number[i]:
                    cow += 1
                    if bull > 0:
                        bull -= 1
                # If good digit & wrong place
                elif answer[i] in number:
                    bull += 1
                    if cow > 0:
                        cow -= 1
                # If wrong digit
                else:
                    if cow > 0:
                        cow -= 1
                    if bull > 0:
                        bull -= 1
                    
        else: # Win
            print("Well done !")
            break

if __name__ == "__main__":
    main()