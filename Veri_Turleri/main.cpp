#include <iostream>
#include <string>

int main() {
    int tam_sayi=10;
    float kesirli_sayi=3.14f;
    double buyuk_kesirli_sayi=3.14000000000;
    char karakter='U';
    std::string metin="Selamun Aleykum Dunya!";
    bool dogru_mu=true;

    std::cout << "int: " << tam_sayi << std::endl;
    std::cout << "float: " << kesirli_sayi << std::endl;
    std::cout << "double: " << buyuk_kesirli_sayi << std::endl;
    std::cout << "char: " << karakter << std::endl;
    std::cout << "string: " << metin << std::endl;
    std::cout << "bool: " << dogru_mu << std::endl;
}