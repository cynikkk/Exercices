content = []

for line in open("./exercice22.txt", 'r').readlines():
    content.append(line.rstrip())

contentCount = list(set(content))

for name in contentCount:
    print(name, 'occured', content.count(name), 'times')
            