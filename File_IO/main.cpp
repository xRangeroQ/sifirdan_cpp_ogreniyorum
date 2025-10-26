// Libraries
#include <iostream>
#include <fstream>
#include <string>

// Main Function
int main() {

    // Declare File Name
    std::string File_Name = "File.txt";
    
    // IO Operation(s)
    // Write
    std::fstream File_W(File_Name, std::ios::out);
    File_W << "Test dosya acma islemi.\n";
    File_W << "Test dosya acma islemi 2.\n";
    File_W << "Test dosya acma islemi 3.\n";
    File_W.close();
    
    // Read
    std::string Line;
    std::fstream File_R(File_Name, std::ios::in);
    if (File_R.is_open()) {
        while (std::getline(File_R, Line)) {
            std::cout << Line << std::endl;
        }
        File_R.close();
    } else {
        std::cout << "Unable to open file!";
    }


    // Return Function
    return 0;
}