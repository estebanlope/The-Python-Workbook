'''
Create a program that reads two integers, a and b, from the user.Your program should
compute and display:
• The sum of a and b
• The difference when b is subtracted from a
• The product of a and b
• The quotient when a is divided by b
• The remainder when a is divided by b
• The result of log10 a
• The result of ab
'''
# Import modules
from math import log10

# Read input from the user
intA = int(input('Enter the value of A: '))
intB = int(input('Enter the value of B: '))

# Compute and display the values
print('The sum of a and b is:', intA + intB)
print('The difference when b is subtracted from a is:', intB - intA)
print('The product of a and b is:', intA * intB)
print('The quotient when a is divided by b is:', intA // intB)
print('The remainder when a is divided by b is:', intA % intB)
print('The result of log10 a is:', log10(intA))
print('The result of ab is:', intA ** intB)
