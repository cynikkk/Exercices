import random

""" TODO
# Debug l'overflow par rapport à l'index de specialCharList
# Améliorer UI et options de génération
"""

lowercaseCharList = []
for letter in range(97, 123):
    lowercaseCharList.append(chr(letter))

uppercaseCharList = []
for letter in range(65, 91):
    uppercaseCharList.append(chr(letter))

specialCharList = ['`','~','!','@','#','$','%','^','&','*','(',')','_','-','+','=','{','[','}','}','|','\\',':',';','"','\'','<',',','>','.','?','/']

def main():
    passwordLenght = int(input("Insert lenght of your password : "))
    passwordGenerated = []

    for i in range(1, passwordLenght + 1):
        choice = random.randint(1, 4)
        if choice == 1:
            passwordGenerated.append(lowercaseCharList[random.randint(1, 26)])
        elif choice == 2:
            passwordGenerated.append(uppercaseCharList[random.randint(1, 26)])
        elif choice == 3:
            passwordGenerated.append(specialCharList[random.randint(1, 32)])
        else:
            passwordGenerated.append(random.randint(0, random.randint(9, 55)))
    
    # Convert into string
    passwordGenerated = "".join([str(item) for item in passwordGenerated])

    print("Password : " + str(passwordGenerated))

    
if __name__ == "__main__":
    main()