import pandas as pd

data = pd.read_csv("student_data.csv")

avg = data["Оноо"].mean()

data["above_average"] = data["Оноо"] > avg

print(data)