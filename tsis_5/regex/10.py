import re

text = input()
string = text[0]
for i in range(1, len(text)):
    
    if(text[i].isupper()):
        string += (" " + text[i].lower())
    else :
        string += text[i]

gone = re.sub("\s", '_', string)
print(gone)
