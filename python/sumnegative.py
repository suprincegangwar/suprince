def sum_of_digits(num):
    if num < 0:
        return "Number must be a nonnegative integer."
    if num > 10**18:
        return "Number exceeds the allowed limit."
    
    return sum(int(digit) for digit in str(num))

number = int(input("Enter a nonnegative integer (up to 10^18): "))

result = sum_of_digits(number)
print(f"The sum of the digits of {number} is: {result}")
