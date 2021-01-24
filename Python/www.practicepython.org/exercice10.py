# TODO
# See practicepython.org/exercise/2014/04/10/10-list-overlap-comprehensions.html
import random

a = b = range(1, random.randint(1, 50) + 1)
c = []

for number in a:
    if number in b:
        if number not in c:
            c.append(number)

print(c)