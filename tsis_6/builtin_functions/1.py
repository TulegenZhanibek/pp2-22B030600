def multipy(a):
    d = 1
    for i in a:
        d *= int(i)
    return d


a = input().split()
print(multipy(a))