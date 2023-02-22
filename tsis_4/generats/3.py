def my_generator(a, b):
    for i in range(a, b + 1):
        yield i * i
        
n = int(input())
m = int(input())
all = my_generator(a = n, b = m)
for i in all:
    print(i)