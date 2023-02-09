def Rabbit(l, h):
    rab = (l - (2 * h)) / 2
    return int(rab)

def Chicken(l, h):
    chi = h - Rabbit(l, h)
    return int(chi)

l = int(input())
h = int(input())
print(Rabbit(l, h), Chicken(l, h), end = " ")
