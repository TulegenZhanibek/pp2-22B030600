with open('C:\\pp2\\tsis_6\\w3school6\\read.txt', "r") as phonk:
    with open('new_file' + ".txt", "w") as file:
        file.write(phonk.read())