#include <iostream>
using namespace std;

// Operatörler
int main() {
    // Aritmetik
    int toplama = 10 + 15; // 25
    int cikarma = 15 - 10; // 5
    int carpma = 10 * 10; // 100
    int bolme = 50 / 50; // 1
    int mod_alma = 3 % 2; // 1 > Kalan Alınır

    // İlişkisel
    bool esit_mi = 1 == 1; // true
    bool buyuk_mu = 2 > 1; // true
    bool buyuk_veya_esit_mi = 2 >= 2; // true
    bool kucuk_mu = 1 < 2; // true
    bool kucuk_veya_esit_mi = 2 <= 2; // true
    bool esit_degil_mi = 1 != 2;  // true

    // Mantıksal
    bool degildir = !false; // true
    bool ve = true && true; // true
    bool veya = true || false; // true

    cout << toplama << endl << cikarma << endl << carpma << endl << bolme << endl << mod_alma << endl;
    cout << esit_mi << endl << buyuk_mu << endl << buyuk_veya_esit_mi << endl << kucuk_mu << endl << kucuk_veya_esit_mi << endl << esit_degil_mi << endl;
    cout << degildir << endl << ve << endl << veya << endl;

}