// Libraries
#include <iostream>

// Main Function
int main() {

    // Create INT Array
    int array[5] = {1,2,3,4,5};
    
    // COUT
    for (int init = 0;init < sizeof(array)/sizeof(array[0]);init++) {
        std::cout << array[init] << " - " << &array[init] << std::endl;
    }

    // Return main
    return 0;
}