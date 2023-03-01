import re

a = input()
x = re.search("^[a][b].*$", a)
if(x):
    print("Yes!")

else :
    print("No!")