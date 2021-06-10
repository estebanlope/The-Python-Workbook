'''
Pretend that you have just opened a new savings account that earns 4 percent interest
per year. The interest that you earn is paid at the end of the year, and is added
to the balance of the savings account. Write a program that begins by reading the
amount of money deposited into the account from the user. Then your program should
compute and display the amount in the savings account after 1, 2, and 3 years. Display
each amount so that it is rounded to 2 decimal places.
'''
# Set the constants
INTEREST = 4.0/100;

# Read the input from the user
money = int(input('Input the amount of money to calculate the savings: '))

# Calculate and display the results
for year in range(1, 4):
  money += money * INTEREST
  
  print('The savings in the year {} with an interest percent per year of {} is ${:.2f}'.format(year, INTEREST, money))
