
names = "Alice;Bob;Charlie;David;Eve"

# Splitting the string by semicolon
print(names.split(';'))

names = "ABCrPQRrSTUVWXrrrpyrstr"


name_list = names.split('r')


print(name_list)

words = ["Hello", "world", "Python", "is", "great"]

# Joining with a space
joined_string = " ".join(words)
print(joined_string)

# Strings to concatenate
str1 = "Hello"
str2 = "World"

# Concatenation
result = str1 + " " + str2
print(result)

# List of strings
words = ["Python", "is", "awesome"]

# Concatenation using join
result = " ".join(words)
print(result)

# Variables
name = "Alice"
age = 30

# Concatenation using f-strings
result = f"{name} is {age} years old."
print(result)

# Variables
animal = "dog"
color = "brown"

# Concatenation using format
result = "{} is a {}".format(color, animal)
print(result)

# Variables
food = "pizza"
quantity = 3

# Concatenation using % operator
result = "I want %d slices of %s." % (quantity, food)
print(result)

# String to repeat
text = "Hello"

# Repeat the string 3 times
repeated_text = text * 3
print(repeated_text)


