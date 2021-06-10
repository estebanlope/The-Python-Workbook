'''
An online retailer sells two products: widgets and gizmos. Each widget weighs 75
grams. Each gizmo weighs 112 grams. Write a program that reads the number of
widgets and the number of gizmos in an order from the user. Then your program
should compute and display the total weight of the order.
'''
# Set the constants
WID_WEIGHT = 75
GIZ_WEIGHT = 112

# Read the input from the user
numberWidgets = int(input('Input the number of widgets: '))
numberGizmos = int(input('Input the number of gizmos: '))

# Calculate and display the results
totalWeight = WID_WEIGHT * numberWidgets + GIZ_WEIGHT * numberGizmos
print('The total wiight of the order is ', totalWeight)