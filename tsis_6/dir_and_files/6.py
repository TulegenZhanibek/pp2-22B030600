import os
oppo = []
for i in range(65, 91):
    oppo.append(chr(i))
for i in oppo:
    with open(i + ".txt", 'w') as file:
        if not (i + ".txt"):
            file.write("Hello world!")
        else :
            print("has already")