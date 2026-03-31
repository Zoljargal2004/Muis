import pandas as pd

data = pd.read_csv("student_data.csv")

print("median: ", data["Оноо"].median())
print("dundaj: ", data["Оноо"].mean())
print("min: ", data["Оноо"].min())
print("max: ", data["Оноо"].max())
print("standart hazailt: ", data["Оноо"].std())

