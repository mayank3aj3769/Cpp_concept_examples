#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "Some animal sound" << endl; }
};

class Dog : public Animal {
public:
    void speak() override { cout << "Woof" << endl; }
    void dogSpecificFunction() { cout << "Fetching stick" << endl; }
};

class Cat : public Animal {
public:
    void speak() override { cout << "Meow" << endl; }
    void catSpecificFunction() { cout << "Chasing mouse" << endl; }
};

void tryToCast(Animal* animal) {
    Dog* dog = dynamic_cast<Dog*>(animal);  // Converts pointer of type Animal to Dog/Cat at runtime. 
    if (dog) {
        cout << "It's a dog!" << endl;
        dog->dogSpecificFunction();
        dog->speak();
    } else {
        cout << "Not a dog!" << endl;
    }

    Cat* cat = dynamic_cast<Cat*>(animal);
    if (cat) {
        cout << "It's a cat!" << endl;
        cat->catSpecificFunction();
        cat->speak();
    } else {
        cout << "Not a cat!" << endl;
    }
}

int main() {
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();

    tryToCast(myDog);
    cout<<"---------------"<<endl;
    tryToCast(myCat);

    delete myDog;
    delete myCat;

    return 0;
}
