from os import system
from time import sleep

def clearScreen():
    system('clear') # If windows replace with ('cls')

def chooseWinner(actionP1, actionP2):
    p1 = "Player 1"
    p2 = "Player 2"
    equality = "Equality"

    if actionP1 == actionP2:
        return equality
    elif actionP1 == "r" and actionP2 != "p":
        return p1
    elif actionP1 == "s" and actionP2 != "r":
        return p1
    elif actionP1 == "p" and actionP2 != "s":
        return p1
    else:
        return p2
    
# Initialization
clearScreen()
print("Welcome ! Rock = r, Scissors = s, Paper = p")
sleep(3)

continuePlaying = "y"

while continuePlaying != "n":
    actionP1 = input("Player 1, choose an action : ").lower()
    clearScreen()

    actionP2 = input("Player 2, choose an action : ").lower()
    clearScreen()

    # There's probably a better way to do it
    if chooseWinner(actionP1, actionP2) == "Equality":
        print("Equality !")
    else:
        print(chooseWinner(actionP1, actionP2) + " wins !")
    
    continuePlaying = input("Revenge ? (y/n): ")
    clearScreen()
    

