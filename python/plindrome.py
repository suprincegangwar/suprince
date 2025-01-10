
def is_palindrome(input_string):
    
    cleaned_string = ''.join(c.lower() for c in input_string if c.isalnum())
    
    return cleaned_string == cleaned_string[::-1]


user_input = input("Enter a string to check if it is a palindrome: ")


if is_palindrome(user_input):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
