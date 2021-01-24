number = int(input("Number : "))

listRange = list(range(1, number + 1))

def isPrime(n):
   if n <= 1:
      return False
   else:
      for i in range(2, n):
         if n % i == 0: # Checking for factors
            return False
   return True

for element in listRange:
    if isPrime(element):
        print(str(element) + " is a prime number")