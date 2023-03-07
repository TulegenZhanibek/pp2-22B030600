brand = ['Play_station', 'Apple', 'Windows', 'Xbox']
with open('C:\\pp2\\tsis_6\\w3school6\\read.txt', "w") as phonk:
    for go in brand:
        phonk.write("%s" % (go + " "))

new_text = open('text', "r")
print(new_text.read())
new_text.close()