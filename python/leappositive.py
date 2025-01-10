def is_leap_year(year):
    if year <= 0:
        return "Year must be a positive integer."
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return f"{year} is a leap year."
    else:
        return f"{year} is not a leap year."

year = int(input("Enter a positive integer for the year: "))

result = is_leap_year(year)
print(result)
