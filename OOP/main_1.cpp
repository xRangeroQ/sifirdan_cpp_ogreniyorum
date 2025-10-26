// Libraries
#include <iostream>

// Class Declaration
class Employee {
private:

    // Variables
    std::string Name;
    int Age;

public:

    // Setter Method
    void setName(std::string Name) { this->Name = Name; }
    void setAge(int Age) { this->Age = Age; }

    // Getter Method
    std::string getName() { return this->Name; }
    int getAge() { return this->Age; }

    // Display
    void DisplayInfo() {
        std::cout << "Name: " << this->Name << std::endl;
        std::cout << "Age: " << this->Age << std::endl;
    }

};


// Main Function
int main() {

    // Create Object
    Employee E1;

    // Set Object Values
    E1.setName("sifirdan_cpp_ogreniyorum");
    E1.setAge(18);

    // Output Object Values
    std::cout << E1.getName() << " - " << E1.getAge() << std::endl;
    E1.DisplayInfo();

    // Return Function
    return 0;
}