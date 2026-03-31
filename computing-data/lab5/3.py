import pandas as pd
import numpy as np

data = pd.read_csv("student_data.csv")

data["grade_letter"] = np.select(
    [
        data["Оноо"] >= 90,
        data["Оноо"] >= 80,
        data["Оноо"] >= 70,
        data["Оноо"] >= 60
    ],
    ["A", "B", "C", "D"],
    default="F"
)

data.to_csv("3.csv")