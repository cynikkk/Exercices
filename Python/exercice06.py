word = input("Verify if your word is a palindrome : ")

def isPalindrome(word):
    word = word.lower() # prevent false negatives
    if word[::-1] == word:
        return True
    else:
        return False

if isPalindrome(word):
    print("Your word is a palindrome")
else:
    print("Your word isn't a palindrome")