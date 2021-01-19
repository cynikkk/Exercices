
def removeDuplicates1(oldList):
    newList = []
    for element in oldList:
        if element not in newList:
            newList.append(element)
    return newList

def removeDuplicates2(oldList):
    # ...
    return oldList

a = [1, 1, 2, 1, 3, 3, 2, 4, 5, 6, 5, 4]
b = removeDuplicates1(a)
c = removeDuplicates2(a)

print("a : " + str(a))
print("b : " + str(b))
print("c : " + str(c))