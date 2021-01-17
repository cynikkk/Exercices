number = int(input("Number : "))

if number % 2 == 0:
    print(str(number) + " is even")
elif number % 4 == 0:
    print(str(number) + " is even and a multiple of 4")
else:
    print(str(number) + " is odd")