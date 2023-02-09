class shape :
    def __init__ (self):
        self.length = 0
    def area (self):
        print (self.length * self.length)

class square(shape):
     def __init__ (self, length):
          self.length = length 

b = int(input())
a = square(b)
a.area()
c = shape()
c.area()

class Rectangle(shape):

    def __init__(self, length, width):
        self.width = width
        self.length = length
        
    def area (self):
        print( self.length  * self.width)  

d = int(input())
w = Rectangle(b,d)   
w.area() 