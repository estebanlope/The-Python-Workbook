'''
In the United States, fuel efficiency for vehicles is normally expressed in miles-pergallon
(MPG). In Canada, fuel efficiency is normally expressed in liters-per-hundred
kilometers (L/100 km). Use your research skills to determine how to convert from
MPGto L/100 km. Then create a program that reads a value from the user in American
units and displays the equivalent fuel efficiency in Canadian units.
'''
# Set the constants
MPG_TO_LPHK = 235.215

# Read the input from the user
fuelAmerican = float(input('Enter the fuel in American Units:'))

# Calculate and display the results
print('The fuel in Canadian units is:', fuelAmerican * MPG_TO_LPHK)