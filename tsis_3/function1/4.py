def isPrime(x):
    if x == 1:
        return False
    d = 2
    while x % d != 0 and pow(d,2) < x:
        d+=1
    if x % d == 0:
        return False
    else: 
        return True

def filterPrime(li):
    return list(filter(isPrime, li))