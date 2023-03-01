import re

n = input()
b = re.search('^a.*?b$', n)

if(b):
    print("Yes!")
else :
    print("No!")