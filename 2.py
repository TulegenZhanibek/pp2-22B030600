a = int(input())
b = int(input())
c = int(input())
d = int(input())

# for l in range(d - c + 1):
#     print("", c, sep = '\t', end = "")
#     c += 1

# for o in range(d - c):
#     print(c, sep = '\t', end = "")
#     c += 1
for i in range(b - a + 1):
    print(a, end = '\t')
    for j in range(d - c + 1):
        print(a * c, end = '\t')
        c += 1
        print()
        a += 1