def ctf(celsius):
    return (celsius * 9/5) + 32

def ctk(celsius):
    return celsius + 273.15

def ftc(fahrenheit):
    return (fahrenheit - 32) * 5/9

def ftk(fahrenheit):
    return ctk(ftc(fahrenheit))

def ktc(kelvin):
    return kelvin - 273.15

def ktf(kelvin):
    return ctf(ktf(kelvin))

def temp_conversion():
    print("Temperature Conversion")
    print("1: Celsius to Fahrenheit")
    print("2: Celsius to Kelvin")
    print("3: Fahrenheit to Celsius")
    print("4: Fahrenheit to Kelvin")
    print("5: Kelvin to Celsius")
    print("6: Kelvin to Fahrenheit")
    
    choice = int(input("Select a conversion (1-6): "))
    temperature = float(input("Enter the temperature: "))
    
    if choice == 1:
        converted = ctf(temperature)
        print(f"{temperature}°C = {converted}°F")
    elif choice == 2:
        converted = ctk(temperature)
        print(f"{temperature}°C = {converted}K")
    elif choice == 3:
        converted = ftc(temperature)
        print(f"{temperature}°F = {converted}°C")
    elif choice == 4:
        converted = ftk(temperature)
        print(f"{temperature}°F = {converted}K")
    elif choice == 5:
        converted = ktc(temperature)
        print(f"{temperature}K = {converted}°C")
    elif choice == 6:
        converted = ktf(temperature)
        print(f"{temperature}K = {converted}°F")
    else:
        print("Invalid choice!")


temp_conversion()
