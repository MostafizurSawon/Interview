class Student:
    pass

def name(self):
    print("Hello Students!")

Student.call1 = name
Student.value = 10

a1 = Student()
a1.call1()
