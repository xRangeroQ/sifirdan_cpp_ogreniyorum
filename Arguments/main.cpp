// Module(s)
#include <iostream>

// Main Function
int main(int argc, char *argv[]) {

    // Cout Arguments
    for (int i = 0; i < argc; i++) {
        std::cout << "Argument " << i+1 << ": " << argv[i] << std::endl;
    }

    // Return Function
    return 0;
}