import re

def search(a):
    collide = '^[a - z]+$'
    if(re.search(collide, a)):
        return "Yes!"
    else :
        return "No!"
    
a = input()
print(search(a))