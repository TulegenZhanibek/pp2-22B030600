import os
print(os.access("C:\\pp2\\tsis_6\\w3school6\\read.txt", os.F_OK))
print(os.access("C:\\pp2\\tsis_6\\w3school6\\almost.txt", os.R_OK))
print(os.access("C:\\pp2\\tsis_6\\w3school6\\read.txt", os.W_OK))
print(os.access("C:\\pp2\\tsis_6\\w3school6\\read.txt", os.X_OK))