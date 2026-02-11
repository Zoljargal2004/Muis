students = {
    "S001": ("Бат", 20, "Компьютерын ухаан"),
    "S002": ("Болд", 21, "Программ хангамж")
}

def add_student(student_id, name, age, major):
    students[student_id] = (name, age, major)
    # Оюутны мэдээллийг нэмэх

def find_student_by_id(student_id):
    print(students[student_id])
    # Оюутны мэдээллийг ID-аар хайх

def list_students_by_major(major):
    lis = []
    for key, value in students.items():
        if major in value:
            lis.append(value)
    print(lis)
    # Тодорхой хөтөлбөрийн бүх оюутнуудыг жагсаах

def count_students():
    print(len(students))


# Жишээ хэрэглээ:
add_student("S003", "Уянга", 22, "Компьютерын ухаан")
find_student_by_id("S002") # Гаралт: ("Болд", 21, "Программ хангамж")
list_students_by_major("Компьютерын ухаан") # Гаралт: [("Бат", 20, "Компьютерын ухаан), ("Уянга", 22, "Компьютерын ухаан")]
count_students() # Гаралт: 3