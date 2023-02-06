'''
In this exercise, you will create a program that begins by reading a measurement
in feet from the user. Then your program should display the equivalent distance in
inches, yards and miles. Use the Internet to look up the necessary conversion factors
if you don't have them memorized.
'''

# Set the constants
FOOT_TO_IN = int(12)
FOOT_TO_YD = float(0.33333)
FOOT_TO_MI = float(0.000189394)

feet = float(input('Enter the number of feet: '))

# Calculate and display the results 
inches = feet * FOOT_TO_IN
yards = feet * FOOT_TO_YD
miles = feet * FOOT_TO_MI

print('\n{:.2f} feet in inches are: {:.2f}'.format(feet, inches))
print('\n{:.2f} feet in yards are: {:.5f}'.format(feet, yards))
print('\n{:.2f} feet in miles are: {:.10f}'.format(feet, miles))
