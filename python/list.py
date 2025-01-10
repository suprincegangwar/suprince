# 1. Creating a list
fruits = ['apple', 'banana', 'cherry', 'date', 'elderberry']

# 2. Accessing elements (indexing)
print("First fruit:", fruits[0])  # 'apple'
print("Last fruit:", fruits[-1])  # 'elderberry'

# 3. Slicing a list (from index 1 to 3, inclusive)
some_fruits = fruits[1:4]
print("Fruits from index 1 to 3:", some_fruits)  # ['banana', 'cherry', 'date']

# 4. Appending an item to the list
fruits.append('fig')  
print("After appending 'fig':", fruits)

# 5. Inserting an item at a specific index (index 2)
fruits.insert(2, 'grape')  
print("After inserting 'grape' at index 2:", fruits)

# 6. Removing an item by value ('banana')
fruits.remove('banana')  
print("After removing 'banana':", fruits)

# 7. Popping the last element from the list
last_fruit = fruits.pop()  
print("After popping the last fruit ('fig'):", fruits)
print("Popped fruit:", last_fruit)

# 8. Popping an element at a specific index (index 2)
removed_fruit = fruits.pop(2)  
print("After popping the fruit at index 2:", fruits)
print("Popped fruit from index 2:", removed_fruit)

# 9. Sorting the list in alphabetical order
fruits.sort()  
print("After sorting:", fruits)

# 10. Reversing the list
fruits.reverse()  
print("After reversing:", fruits)

# 11. List comprehension: Create a new list of fruits with the letter 'e'
fruits_with_e = [fruit for fruit in fruits if 'e' in fruit]
print("Fruits containing 'e':", fruits_with_e)

# 12. Finding the index of an item
index_of_cherry = fruits.index('cherry')  
print("Index of 'cherry':", index_of_cherry)

# 13. Counting occurrences of an item (if it appears multiple times)
count_of_e = fruits.count('elderberry')  
print("Count of 'elderberry':", count_of_e)

# 14. Creating a shallow copy of the list
fruits_copy = fruits.copy()
print("Shallow copy of the list:", fruits_copy)

# 15. Clearing the list (removing all elements)
fruits.clear()
print("After clearing the list:", fruits)

# 16. Getting the length of the list
print("Length of the original fruits list:", len(fruits_copy))

# 17. Combining two lists (concatenating lists)
more_fruits = ['kiwi', 'lemon']
combined_fruits = fruits_copy + more_fruits  
print("Combined fruits list:", combined_fruits)

# 18. Extend the list by another list (adding elements from another list)
fruits_copy.extend(more_fruits)  
print("After extending with 'more_fruits':", fruits_copy)
