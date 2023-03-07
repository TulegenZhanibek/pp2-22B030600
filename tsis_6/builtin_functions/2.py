def lower_case(sum_lower):
    suml = 0
    for i in sum_lower:
        for j in range(len(i)):
            
            if(i[j].islower()):
                suml += 1
                
    return suml
    
def upper_case(sum_upper):
    sumu = 0
    for i in sum_upper:
        for j in range(len(i)):
            
            if(i[j].isupper()):
                sumu += 1
                
    return sumu

def space_case(sum_space):
    sums = 0
    for i in range(len(sum_space)):
        for j in range(len(sum_space[i])):
        
            if(sum_space[i][j] == " "):
                sums += 1
                
    return sums

a = input()
print(lower_case(a))
print(upper_case(a))
print(space_case(a))