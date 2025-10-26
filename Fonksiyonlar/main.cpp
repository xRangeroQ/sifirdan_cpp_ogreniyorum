// Module(s)
#include <iostream>

// Used Namespaces
using namespace std;

// Functions
void Say_Hi(float Day) {
    cout << "sifirdan_cpp_ogreniyorum" << endl << "Gun: " << Day << endl;
}

float Increase_Day(float First_Number, float Second_Number) {
    return First_Number + Second_Number;
}


// Main Function
int main() {

    // Use Functions
    float Result_Day = Increase_Day(3.5f, 3.5f);
    Say_Hi(Result_Day);

    // Return Main Function
    return 0;
}