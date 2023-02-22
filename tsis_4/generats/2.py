def my_generator(n):
    for number in range(n + 1):
        
        if(number % 2 == 0):
            yield number

m = int(input())
all = my_generator(n = m)
numbers = []
for i in all:
    numbers.append(i)
print(numbers)