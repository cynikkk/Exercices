a = [5, 10, 15, 20, 25]

def newList(prevList):
    newList = [prevList[0], prevList[-1]]
    return newList

b = newList(a)

print(a)
print(b)