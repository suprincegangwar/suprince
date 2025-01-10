name = "suprince"

short = name[0:3] # 0 sa two tak print hoga 

print(short)

char1 = short[1]

char1 = short[-1]

print(char1)

shortshort = name[1:7:3] # pahale aak sa chaa tak fir teen teen ka jump start from first

print(shortshort)

print(len(name)) # for the length of string 

print(name.endswith("ce"))
print(name.startswith("ce"))
print(name.capitalize()) # capatalize only first letter of string also if more than one word is given
print(name.upper()) 
print(name.replace("su","  ")) 
print(list(name)) # List all the all the elements of the string

friends = ["apple" , "cow", 11,22,11 , "because" ]

print(friends)

friends.append("Suprince")

print(friends)

a = [1,4,5,3,8,2,4]
print(a)
a.sort()
print(a)
a.insert(2,44) # insert 44 at index 3
print(a)

print(a.pop(3))
print(a)
text = "Python Programming"

# Accessing characters
print(text[0])     # 'P'
print(text[-1])    # 'g'

# Slicing strings
print(text[0:6])   # 'Python'
print(text[7:])    # 'Programming'
print(text[:6])    # 'Python'

# Slicing with steps
print(text[::2])    # 'Pto rgamn'
print(text[::-1])   # 'gnimmargorP nohtyP' (reversed string)
