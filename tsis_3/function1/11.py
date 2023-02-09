import math
def isPalindrom(s):
    i = 0
    while i != math.ceil(s.__len__() / 2):
        if s[i] != s[s.__len__()-i-1]:
            return False
        i += 1
    return True