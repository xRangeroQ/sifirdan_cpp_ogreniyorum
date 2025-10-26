// Module(s)
#include <iostream>
#include <fstream>

// Functions
bool WriteFile(std::fstream& File_W, std::string Content) {
    if (Content == "exit") {
        File_W << "00" << std::endl;
        File_W.flush();
        return false;
    } else {
        File_W << Content << "-";
        File_W.flush();
        return true;
    }
}

// Main Function
int main() {

    // Declare Variables
    std::string Number;
    std::fstream File_Write("output.txt", std::ios::app);

    while (true) {
        std::cin >> Number;

        bool result = WriteFile(File_Write, Number);
        if (!result) {
            break;
        }
    }

    // Return Main Function
    return 0;
}