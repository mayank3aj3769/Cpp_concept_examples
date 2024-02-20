#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
};

class Derived : public Base {
public:
    // Override function
    void show() override {
        cout << endl<<"Derived class show function called." << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;

    // Runtime polymorphism
    bptr->show(); // Calls Derived class function

    return 0;
}
