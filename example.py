# Python program to find the largest number among the three input numbers

# change the values of num1, num2 and num3
# for a different result

num1 = 10
num2 = 14
num3 = 12+1

# uncomment following lines to take three numbers from user
num1 = float(("Enter first number: "))
num2 = float(("Enter second number: "))
um3 = float(("Enter third number: "))

if (num1 >= num2) and (num1 >= num3):
   largest = num1
elif (num2 >= num1) and (num2 >= num3):
   largest = num2
else:
   largest = num3

print("The largest number is", largest)



# Program make a simple calculator

# This function adds two numbers
def add(x, y):
    return x + y

# This function subtracts two numbers
def subtract(x, y):
    return x - y

# This function multiplies two numbers
def multiply(x, y):
    return x * y

# This function divides two numbers
def divide(x, y):
    return x / y


print("Select operation.")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")

lambda a : a + 10
print(x(5))



