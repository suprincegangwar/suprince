import pandas as pd


file_path = r"C:\Users\Suprince\OneDrive\Desktop\coding 1\python\Data\Titanic-Dataset.csv.csv" 
titanic_data = pd.read_csv(file_path)


print("First 10 rows of the dataset:")
print(titanic_data.head(10))


print("\nShape of the dataset:", titanic_data.shape)
print("\nColumn names:", titanic_data.columns.tolist())
print("\nData types:")
print(titanic_data.dtypes)


print("\nMissing values in the dataset:")
print(titanic_data.isnull().sum())
