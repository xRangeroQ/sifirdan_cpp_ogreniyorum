// Module(s)
#include <iostream>

// Used Namespace(s)
using namespace std;

// Main Function
int main() {

    // Declare Color
    string Clear = "\033[0m";
    string Green = "\033[92m";
    string Yellow = "\033[93m";

    // Declare Variable
    int Variable = 10;

    // Declare Reference Variable
    int &Variable_Reference = Variable;

    // Cout MemoryAddress, Reference Variable and Variable
    cout << endl;
    cout << "Variable: " << Green << Variable << Clear << endl;
    cout << "Variable MemoryAddress: " << Yellow << &Variable << Clear << endl;
    cout << endl;
    cout << "Reference Variable: " << Green << Variable_Reference << Clear << endl;
    cout << "Reference Variable MemoryAddress: " << Yellow << &Variable_Reference << Clear << endl;
    cout << endl;

    // Return Function
    return 0;
}