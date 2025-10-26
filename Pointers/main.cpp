// Module(S)
#include <iostream>

// Used Namespace(s)
using namespace std;

// Main Function
int main() {

    // Declare Variable
    int tam_sayi = 2;
    cout << tam_sayi << " - " << &tam_sayi << endl;

    // Declare Pointer
    int* isaretci = &tam_sayi;
    cout << *isaretci << " - " << isaretci << " - " << &isaretci << endl;

    // Declare Pointer To Pointer
    int** isaretciyi_isaret_eden_isaretci = &isaretci;
    cout << **isaretciyi_isaret_eden_isaretci << " - " << *isaretciyi_isaret_eden_isaretci << " - " << isaretciyi_isaret_eden_isaretci << " - " << &isaretciyi_isaret_eden_isaretci << endl;

    // Return Function
    return 0;
}