from datetime import date


name = input("Name : ")
age = int(input("Age : "))
nbrRepeat = int(input("Repeatitions : "))

currentYear = date.today().year

deathDate = currentYear + (100 - age)

for i in range(nbrRepeat):
    print(name + ", vous allez avoir 100 ans en " + str(deathDate))

