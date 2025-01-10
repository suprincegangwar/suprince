# Function to check if a number is a palindrome without using string conversion
def palindrome(num):
    original = num
    reversed = 0
    
    while num > 0:
        digit = num % 10  
        reversed = reversed * 10 + digit  
        num = num // 10  
    
    return original == reversed

number = 12321
if palindrome(number):
    print(f"{number} is a palindrome.")
else:
    print(f"{number} is not a palindrome.")
