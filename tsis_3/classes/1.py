class String:
    def __init__ (self,String):
        self.string = String
        
    def getString(self):
        self.string = str(input())
        
    def printString (self):
        print(self.string.upper())
        
put = input()
out = String(put)
out.printString()