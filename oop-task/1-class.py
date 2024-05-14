class Student:
    def __init__(self, pen, quantity):
        self.pen = pen
        self.quantity = quantity

    def price(self):
        return self.pen * self.quantity

a1 = Student(10, 15)

print("Total price is:", a1.price())