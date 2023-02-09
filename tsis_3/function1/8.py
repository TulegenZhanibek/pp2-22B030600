def spy_game(nums):
    string = ""
    for i in range( len( nums )):
        string += str( nums[ i ] )

    if '007' in string:
        return True
    else:
        return False
        
print(spy_game([1,2,4,0,0,7,5])) 
print(spy_game([1,0,2,4,0,5,7]))
print(spy_game([1,7,2,0,4,5,0]))