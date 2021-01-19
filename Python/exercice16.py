import random

""" TODO
# Debug l'overflow par rapport à l'index de specialCharList
# Améliorer UI et options de génération
# Enlever les espaces entre les chars
# Régler problème randomNumber toujours le même
"""

lowercaseCharList = []
for letter in range(97, 123):
    lowercaseCharList.append(chr(letter))

uppercaseCharList = []
for letter in range(65, 91):
    uppercaseCharList.append(chr(letter))

specialCharList = ['`','~','!','@','#','$','%','^','&','*','(',')','_','-','+','=','{','[','}','}','|','\\',':',';','"','\'','<',',','>','.','?','/']

randomNumber = random.randint(0, 9)

# Générer pswd via lower, upper, numbers, special chars
def main():
    # Demander nombre de caractères dans le pswd
    passwordLenght = int(input("Insert lenght of your password : "))
    passwordGenerated = []

    for char in range(1, passwordLenght + 1):
        choice = random.randint(1, 4)
        if choice == 1:
            passwordGenerated.append(lowercaseCharList[random.randint(1, len(lowercaseCharList))])
        elif choice == 2:
            passwordGenerated.append(uppercaseCharList[random.randint(1, len(uppercaseCharList))])
        elif choice == 3:
            passwordGenerated.append(specialCharList[random.randint(1, len(specialCharList))])
        else:
            passwordGenerated.append(randomNumber)
    
    passwordGenerated = ' '.join([str(item) for item in passwordGenerated])
    print("Password : " + str(passwordGenerated))
    print(len(specialCharList))
    

if __name__ == "__main__":
    main()