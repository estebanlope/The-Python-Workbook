'''
Write a program that reads a positive integer, n, from the user and then displays the
sum of all of the integers from 1 to n. The sum of the first n positive integers can be
computed using the formula:
n = ( n * (n + 1) ) / 2
'''

# Reading the data
n = int(input('Enter a positive integer: '))

# Calculate the sum
sm = ( n * (n + 1) ) / 2

# Display the result
print('The sum of the first {} positive integers is {}'.format(n, int(sm)))