def isPrime(x):
    d = 2
    while x % d != 0 and pow(d, 2) < x:
        d += 1
    if x % d == 0:
        return False
    else: 
        return True

print(list(map(lambda x : isPrime(x), list)))