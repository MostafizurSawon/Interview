class Person:
  def __init__(self, fname, lname):
    self.firstname = fname
    self.lastname = lname

  def show(self):
    print(self.firstname, self.lastname)


a1 = Person("Sawon", "Syrus")
a1.show()