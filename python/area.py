import math

def area_circle(radius):
    return math.pi * radius ** 2

def perimeter_circle(radius):
    return 2 * math.pi * radius

def area_rectangle(length, width):
    return length * width

def perimeter_rectangle(length, width):
    return 2 * (length + width)

def area_triangle(base, height):
    return 0.5 * base * height

def perimeter_triangle(side1, side2, side3):
    return side1 + side2 + side3

def main():
    print("Select a shape to calculate area and perimeter:")
    print("1. Circle")
    print("2. Rectangle")
    print("3. Triangle")
    
    choice = input("Enter the number of the shape (1/2/3): ")

    if choice == '1':
        radius = float(input("Enter the radius of the circle: "))
        print(f"Area of the circle: {area_circle(radius)}")
        print(f"Perimeter (Circumference) of the circle: {perimeter_circle(radius)}")

    elif choice == '2':
        length = float(input("Enter the length of the rectangle: "))
        width = float(input("Enter the width of the rectangle: "))
        print(f"Area of the rectangle: {area_rectangle(length, width)}")
        print(f"Perimeter of the rectangle: {perimeter_rectangle(length, width)}")

    elif choice == '3':
        base = float(input("Enter the base of the triangle: "))
        height = float(input("Enter the height of the triangle: "))
        side1 = float(input("Enter the length of the first side: "))
        side2 = float(input("Enter the length of the second side: "))
        side3 = float(input("Enter the length of the third side: "))
        print(f"Area of the triangle: {area_triangle(base, height)}")
        print(f"Perimeter of the triangle: {perimeter_triangle(side1, side2, side3)}")

    else:
        print("Invalid choice. Please select 1, 2, or 3.")

if __name__ == "__main__":
    main()
