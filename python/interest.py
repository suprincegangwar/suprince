def calculateSI(principal, rate, time):
   
    simple_interest = (principal * rate * time) / 100
    return simple_interest

def main():
   
    principal = float(input("Enter the principal amount: "))
    rate = float(input("Enter the annual interest rate (in %): "))
    time = float(input("Enter the time period (in years): "))

    interest = calculateSI(principal, rate, time)

    print(f"The simple interest is: {interest}")

if __name__ == "__main__":
    main()