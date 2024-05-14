#include<bits/stdc++.h>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() 
    {
      cout << "The animal will make a sound. \n";
    }
};

// Derived class
class Cat : public Animal {
  public:
    void animalSound() {
      cout << "The Cat will say Mew Mew \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog will say bow wow \n";
    }
};

int main() {
  Animal myAnimal;
  Cat myCat;
  Dog myDog;

  myAnimal.animalSound();
  myCat.animalSound();
  myDog.animalSound();
  
  return 0;
}