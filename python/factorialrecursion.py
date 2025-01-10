def factorial_recursive(n):
    if n <= 1:
        return 1
    return n * factorial_recursive(n - 1)

def factorial_loop(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

def main():
    number = int(input("Enter a number to calculate its factorial: "))
    
    if number < 0:
        print("Factorial is not defined for negative numbers.")
    else:
        print(f"Factorial of {number} using recursion is: {factorial_recursive(number)}")
        print(f"Factorial of {number} using a loop is: {factorial_loop(number)}")

if __name__ == "__main__":
    main()
