import json 
from collections import defaultdict

teacher_subjects = defaultdict(set)
classes = {}
week = defaultdict(set)

# JSON файлыг унших
with open("schedule.json", "r", encoding="utf-8") as file:
    # JSON файлыг Python dictionary болгож хувиргах
    data = json.load(file)


for e in data:
    teacher = e["zaasan_bagshiin_ner"]
    subject = e["khicheeliin_ner"]

    teacher_subjects[teacher].add(subject)
    
    angi = e["uruunii_dugaar"]
    if angi not in classes:
        classes[angi] = 1
    else:
        classes[angi] += 1

    garag = e["garag"]
    if garag not in week:
        week["garag"] = 1
    else:
        week["garag"] += 1



# bagsh bolgoni ordog huchelin too
for t, s in teacher_subjects.items():
    print(t, "→", len(s), "ялгаатай хичээл")
    


print("\n\n\n\nхамгийн бага ачаалалтай анги:",
      min(classes, key=classes.get),
      classes[min(classes, key=classes.get)])

print("хамгийн их ачаалалтай анги:",
      max(classes, key=classes.get),
      classes[max(classes, key=classes.get)])


print("\n\n\n\n7 хоногий хамгиийн их ачаалалтай өдөр", 
      max(week, key = week.get), 
      week[max(week, key = week.get)])