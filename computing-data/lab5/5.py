import pandas as pd

data = pd.read_csv("student_data.csv")

mini = data["Оноо"].min()
maxi = data["Оноо"].max()

data["normalized_grade"] = (data["Оноо"] - mini) / (maxi - mini)

print(data)