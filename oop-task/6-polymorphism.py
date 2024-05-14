class Animal:
    def animalSound(self):
        return "Animal sound default"

class Dog(Animal):
    def animalSound(self):
        return "Woof!"

class Cat(Animal):
    def animalSound(self):
        return "Meow!"

class Snake(Animal):
    def animalSound(self):
        return "Fssss!"

def make_animal_speak(animal):
    return animal.animalSound()

dog = Dog()
cat = Cat()
snake = Snake()

print(make_animal_speak(dog))  
print(make_animal_speak(cat))   
print(make_animal_speak(duck))