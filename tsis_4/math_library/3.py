import math
number_sides = int(input())
lenght_sides = int(input())
perimetr = number_sides * lenght_sides
matter = 2 * int(math.tan(180 / number_sides))
a = lenght_sides / matter
print(int((a * perimetr) / 2))