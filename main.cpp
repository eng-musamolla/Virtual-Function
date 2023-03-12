#include <iostream>
using namespace std;
class Animal {
public:
  virtual void sound() { cout << "Aminal is making a sound." << endl; }
};

class Dog : public Animal {
public:
  void sound() override { cout << "Dog is barking." << endl; }
};

class Cat : public Animal {
public:
  void sound() override { cout << "Cat is meowing.." << endl; }
};

int main() {
  Animal *a = new Dog();
  a->sound();
  a = new Cat();
  a->sound();
  return 0;
}