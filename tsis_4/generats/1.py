import math
def mygeneration(n):
    for i in range(1, n + 1):
        if(math.sqrt(i) * math.sqrt(i) == i):
            yield i

m = int(input())
all = mygeneration(n = m)
for each in all:
    print(each)