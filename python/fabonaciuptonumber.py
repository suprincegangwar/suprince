def generate_fibonacci(n):
    fib_sequence = []
    a, b = 0, 1
    for _ in range(n):
        fib_sequence.append(a)
        a, b = b, a + b
    return fib_sequence

def main():
    terms = int(input("Enter the number of terms for the Fibonacci sequence: "))
    if terms <= 0:
        print("Please enter a positive integer.")
    else:
        print(f"Fibonacci sequence with {terms} terms: {generate_fibonacci(terms)}")

if __name__ == "__main__":
    main()
