'''
Create a program that reads the length and width of a farmer’s field from the user in
feet. Display the area of the field in acres.
'''

SQFEET_ACRE = 43560

# Reading the data of the field
field_l = float(input('Input the length of the field in sqrt feet: '))
field_w = float(input('Input the width of the field in sqrt feet: '))

# Calculate the area and converting it to acres
field_a = field_l * field_w / SQFEET_ACRE

# Displaying the results
print('\nThe area in acres of the field with {:.2f} sqrt feet length and {:.2f} sqrt feet width is {:.2f}'.format(field_l, field_w, field_a))
