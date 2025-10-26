// Libraries
#include <iostream>

// Classes
class Base {
public:
    virtual void Display() {
        std::cout << "Base Class" << std::endl;
    }
};

class Derived : public Base {
public:
    void Display() override {
        std::cout << "Derived Class" << std::endl;
    }
};

// Main Function
int main() {

    // Polymorphism
    Base *DerivedPtr = new Derived();

    // Call
    DerivedPtr->Display();

    // Clear PTR
    delete DerivedPtr;

    // Return Function
    return 0;
}