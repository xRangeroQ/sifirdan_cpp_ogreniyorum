// Module(s)
#include <iostream>

// Main Function
int main()
{

    // Declare Variable
    std::string Value;
    std::cin >> Value;

    // Try Type Cast
    try
    {
        int newValue = std::stoi(Value);
        std::cout << newValue + 10 << std::endl;
    }

    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what();
    }

    // Return Function
    return 0;
}