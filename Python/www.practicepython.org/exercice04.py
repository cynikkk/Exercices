number = int(input("Divisor number : "))

listRange = list(range(1, number + 1))

for element in listRange:
    if number % element == 0:
        print(element)