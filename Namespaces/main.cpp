// Libraries
#include <iostream>

// Declare Namespace(s)
namespace Hello_1 {
    void Cout() {
        std::cout << "Hello 1" << std::endl;
    }
}

namespace Hello_2 {
    void Cout() {
        std::cout << "Hello 2" << std::endl;
    }
}

// Main Function
int main() {

    // Declare Alias Namespace
    namespace alias_1 = Hello_1;

    // Call Functions
    alias_1::Cout();
    Hello_1::Cout();
    Hello_2::Cout();

    // Return Function
    return 0;
}