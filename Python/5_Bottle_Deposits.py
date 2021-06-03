'''
In many jurisdictions a small deposit is added to drink containers to encourage people
to recycle them. In one particular jurisdiction, drink containers holding one liter or
less have a $0.10 deposit, and drink containers holding more than one liter have a
$0.25 deposit.
Write a program that reads the number of containers of each size from the user.
Your program should continue by computing and displaying the refund that will be
received for returning those containers. Format the output so that it includes a dollar
sign and always displays exactly two decimal places.
'''

# Setting the constants
LESS_ONE_LITER_BOTTLES = 0.1
MORE_ONE_LITER_BOTTLES = 0.25

# Reading the number of bottles
n_less = int(input('Input the amount of bottles holding less than one liter: '))
n_more = int(input('Input the amount of bottles holding more than one liter: '))

# Calculating the refund
refund = n_less * LESS_ONE_LITER_BOTTLES + n_more * MORE_ONE_LITER_BOTTLES

# Displaying the refund
print('The total refund is ${:.2f}'.format(refund))
