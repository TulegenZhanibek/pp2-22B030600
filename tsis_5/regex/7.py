import re

text = input()
gone = re.sub("_", '', text)
poland = gone[0].upper() + gone[1::]
print(poland) 