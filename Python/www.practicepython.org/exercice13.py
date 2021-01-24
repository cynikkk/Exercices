number = int(input("Number of numbers in the sequence : "))

# Arg 1 : Numbers in the sequence, Arg 2 : Array to fill with
def fibonacci(num, array):
    n1, n2 = 0, 1
    counted = 0
    while counted < num:
        newNum = n1 + n2
        n1 = n2
        n2 = newNum
        counted += 1
        array.append(n1)

a = []
fibonacci(number, a)
print(a)