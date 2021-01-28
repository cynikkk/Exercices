file = open("./exercice23_1.txt", 'r').readlines()

for line in open("./exercice23_2.txt", 'r').readlines():
    if line in file:
        print(line.rstrip())
