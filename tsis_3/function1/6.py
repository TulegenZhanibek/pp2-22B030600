def rev():
    s = input()
    p = ''
    i = s.__len__()
    while i != 0:
        i -= 1
        p += s[i]
    print(p)