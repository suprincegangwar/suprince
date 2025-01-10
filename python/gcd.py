import math

def calculate_gcd_lcm(a, b):
    gcd = math.gcd(a, b)
    lcm = abs(a * b) // gcd
    return gcd, lcm

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

gcd, lcm = calculate_gcd_lcm(num1, num2)

print(f"The GCD of {num1} and {num2} is: {gcd}")
print(f"The LCM of {num1} and {num2} is: {lcm}")
