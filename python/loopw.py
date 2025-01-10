for i in range(5):
    if i == 3:
        pass  
    print(i)
for i in range(5):
    if i == 3:
        continue  # Skips printing when i == 3
    print(i)
my_dict = {"name": "Alice", "age": 25}
for key in my_dict:
    print(key, my_dict[key])
