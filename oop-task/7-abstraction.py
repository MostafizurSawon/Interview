class A:
    def __init__(self):
        self.__a = 0
        self.__b = 0
        self.__c = 0

    def set(self, x, y, z):
        self.__a = x
        self.__b = y
        self.__c = z

    def show(self):
        print("Value of a =", self.__a)
        print("Value of b =", self.__b)
        print("Value of c =", self.__c)

obj = A()
obj.set(10, 20, 30)
obj.show()
