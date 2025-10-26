// Module(s)
#include <iostream>

// Main Function
int main() {

    // Declaring Array(s)
    int tam_sayi_dizisi[6] = {1, 2, 3, 4, 5};
    int dizi_boyutu = sizeof(tam_sayi_dizisi)/sizeof(tam_sayi_dizisi[0]);
    std::cout << tam_sayi_dizisi << " - " << dizi_boyutu << std::endl;

    for (int init = 0; init < dizi_boyutu; init++) {
        tam_sayi_dizisi[init] = (init == 3) ? 100 : tam_sayi_dizisi[init];
        std::cout << tam_sayi_dizisi[init] << " - " << &tam_sayi_dizisi[init] << std::endl;
    }

    // Return Function
    return 0;
}