import os

path = "C:\\pp2\\tsis_6"
for root, directories, files in os.walk(path):
    for file in files:
        if(file == "new_file.txt"):
            new_path = root
        
print(os.path.exists("new_file.txt"))
print(new_path)
if os.path.exists("new_file.txt"):
    os.remove("new_file.txt")
else :
    print("There is not file")
    