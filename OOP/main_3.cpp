// Module(s)
#include <iostream>

// Class Object
class Object {

public:
    Object() {
        std::cout << "Constructor Called!" << std::endl;
    }

    void print(std::string Message) {
        std::cout << Message << std::endl;
    }

    ~Object() {
        std::cout << "Destructor Called!" << std::endl;
    }
};

// Main Function
int main() {

    // Create Object Obj
    Object Obj;

    // Print
    Obj.print("sifirdan_cpp_ogreniyorum");

    // Return Function
    return 0;
}