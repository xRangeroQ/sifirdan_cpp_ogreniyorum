// Module(s)
#include <iostream>

// Used Namespaces
using namespace std;

// Main Funciton
int main()
{

    // Declare Variable
    int day_number;

    // Get Number
    cin >> day_number;

    // Check Day Number
    if (day_number > 7)
        day_number %= 7;

    // Switch Case
    switch (day_number % 7)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Inavlid Day Number!" << endl;
        break;
    }

    // Return Function
    return 0;
}