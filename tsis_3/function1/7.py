def has_33(nums):
    string = ""
    for i in range(len(nums)):
        string += str(nums[i])

    if '33' in string:
        return True
    else:
        return False

print(has_33([1, 3, 3])) 
print(has_33([1, 3, 1, 3]))
print(has_33([3, 1, 3]))