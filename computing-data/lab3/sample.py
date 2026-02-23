import json 

# JSON файлыг унших
with open("schedule.json", "r", encoding="utf-8") as file:
    # JSON файлыг Python dictionary болгож хувиргах
    data = json.load(file)


# Жишээ: Багш бүрийн хичээлийн тоог тоолох, заавал ийм байх албагүй, өөр шинжилгээ хийж болно.
teacher_course_count = {}
for entry in data:
    # Энэ жишээ давталтын их биеийг өөрчилж дасгалаа хийнэ.
    entry # нь schedule.json дахь нэг объектыг илэрхийлнэ
    entry["zaasan_bagshiin_ner"] # нь тухайн объектыг заасан багшийн нэрийг илэрхийлнэ
    entry["bagshiin_khuviin_dugaar"] # нь тухайн объектыг заасан багшийн id-г илэрхийлнэ

print(teacher_course_count)