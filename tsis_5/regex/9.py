import re

text = input()
x = re.findall(r"[A-Z][a-z]*", text)
y =""

for i in x:
    print(i, end = " ")