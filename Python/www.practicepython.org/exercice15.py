sentence = input("Insert long string : ")

# Method to reverse full sentence
def reverseSentence(sentence):
    return sentence[::-1]

# Method to reverse only words
def reverseWords(sentence):
    return ' '.join(sentence.split()[::-1])

print("Reversed sentence : " + reverseSentence(sentence))
print("Reversed words : " + reverseWords(sentence))