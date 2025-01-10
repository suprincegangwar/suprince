a = int(input("Enter the Value of a : "))
b = int(input("Enter the Value of b : "))
c = int(input("Enter the Value of c : "))

if a>b and a>c :
    greatest = a
elif b>c and b>a :
    greatest = b
else :
    greatest = c
    
print(f"The the greatest number is {greatest}")
