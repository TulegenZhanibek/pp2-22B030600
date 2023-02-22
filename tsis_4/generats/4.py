def my_generator(a):
    for i in range(a, 0, -1):
        yield i
        
n = int(input())
all = my_generator(a = n)
for i in all:
    print(i)