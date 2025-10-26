// Module(s)
#include <iostream>

// Main Function
int main()
{

    // Declare Variable
    int *Heap_INT_Memory = new int[5];

    // Give Value(s) && Cout
    for (int init = 0; init < 5; init++) {
        Heap_INT_Memory[init] = init*2.14f+12.3;
        std::cout << Heap_INT_Memory[init] << std::endl;
    }

    std::cout << Heap_INT_Memory << " releasing memory...";
    delete[] Heap_INT_Memory;

    // Return Function
    return 0;
}