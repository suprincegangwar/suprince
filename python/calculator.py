a = int(input("Enter the value of a : "))
operator = input("Enter the operator : ")
b = int(input("Enter the value of b : "))

if operator == "+":
    print(a+b)
    
elif operator == "-":
    print(a-b)
    
elif operator == "*":
    print(a*b)
    
elif operator == "/":
    if b!=0:
        print(a/b)
        
    else :
        print("Division is not Possible")
        
else:
    print("calculation not possible")
