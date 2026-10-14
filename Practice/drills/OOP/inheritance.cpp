#include <iostream>

class Animal {
public:
    int m_age;
    std::string m_name;
    void print() {
        std::cout << "I am an animal named " << m_name << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal fish;
    fish.m_name = "Nemo";
    fish.print();

    std::cout << std::endl;

    Dog dog;
    dog.m_name = "Barsik";
    dog.print();
    dog.bark();

    std::cout << std::endl;

    Cat cat;
    cat.m_name = "Murzik";
    cat.print();
    cat.meow();

    return 0;
}
