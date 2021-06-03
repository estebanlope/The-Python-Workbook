'''
Create a program that displays your name and complete mailing address formatted in
the manner that you would usually see it on the outside of an envelope. Your program
does not need to read any input from the user.
'''

name = 'Lopez Ramirez, Esteban'
zipCode = 170004
address = 'Cra34D - # 11- 11' 
city = 'Manizales'
country = 'Colombia'

print(name + '\n' + city + ', ' + country + '\n' + address  + ',\n' + str(zipCode))
