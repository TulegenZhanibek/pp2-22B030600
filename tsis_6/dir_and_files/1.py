import os

path = "C:\\pp2\\tsis_6"
for root, directories, files in os.walk(path):
    print(root)
    for directory in directories:
        print(directory)
    for file in files:
        print(file)