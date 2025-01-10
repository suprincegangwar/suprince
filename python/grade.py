def get_grade(score):
    grade_dict = {
        (90, 100): 'A',
        (80, 89): 'B',
        (70, 79): 'C',
        (60, 69): 'D',
        (0, 59): 'F'
    }

    for range, grade in grade_dict.items():
        if range[0] <= score <= range[1]:
            return grade
    return "Invalid score"

try:
    score = int(input("Enter the score (0-100): "))
    grade = get_grade(score)
    print(f"The corresponding grade is: {grade}")
except ValueError:
    print("Please enter a valid integer score.")