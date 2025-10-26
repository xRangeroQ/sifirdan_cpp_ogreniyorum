// Module(s)
#include <iostream>

// Used Namespace(s)
using namespace std;

// Main Block
int main() {
    // Init Variable
    int init = 0;

    // while loop
    while (init <= 5) {
        cout << "While Loop >> " << init << endl;
        init++;
    }

    int init_do = 0;

    // do while loop
    do {
        cout << "Do While Loop >> " << init_do << endl;
        init_do++;
    } while (init_do <= 4);

    // for loop
    for (int init_for; init_for <= 5; init_for++) {
        cout << "For Loop >> " << init_for << endl;
    }
}