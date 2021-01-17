import random

a = b = range(1, random.randint(1, 50) + 1)
c = []

for number in a:
    if number in b:
        if number not in c:
            c.append(number)

print(c)