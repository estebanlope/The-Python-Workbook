'''
The program that you create for this exercise will begin by reading the cost of a meal
ordered at a restaurant from the user. Then your program will compute the tax and
tip for the meal. Use your local tax rate when computing the amount of tax owing.
Compute the tip as 18 percent of the meal amount (without the tax). The output from
your program should include the tax amount, the tip amount, and the grand total for
the meal including both the tax and the tip. Format the output so that all of the values
are displayed using two decimal places.
'''
# Setting the constants
TAX = 8/100
TIP = 18/100

# Reading the cost of the meal
cost = float(input('Input the cost of the meal: '))

# Calculating the tax, tip and total grand
tax = cost * TAX
tip = cost * TIP
total = cost + tip + tax

# Displaying the results
print('The tax of the meal is ${:.2f}'.format(tax))
print('The tip of the meal is ${:.2f}'.format(tip))
print('The total of the meal is ${:.2f}'.format(total))