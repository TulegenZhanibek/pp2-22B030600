import re
n = input()
b = re.search('^[A - Z][a - z]+$', n)

if(b):
    print("Yes!")

else :
    print("No!")
