import json 

# JSON файлыг унших
with open("schedule.json", "r", encoding="utf-8") as file:
    # JSON файлыг Python dictionary болгож хувиргах
    data = json.load(file)
