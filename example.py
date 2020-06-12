import first
import second as sec
from second import d

print('print with \' ')
print("print with \" ")


# A Sample class with init method   
class Person:   
      
    # init method or constructor    
    def __init__(self, name):   
        self.name = name   
      
    # Sample Method    
    def say_hi(self):   
        print('Hello, my name is')   
      
p = Person('Nikhil')   
p.say_hi()

for i in range(0,1):
    hi = 4 + 5 + 9
    print(hi)