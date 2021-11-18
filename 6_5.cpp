#include <iostream>
using namespace std;

int Rekurzija (int, int);
int Decision (int);
 
int main() {

    unsigned int p;                                             // deklaracija potencije
    unsigned int b, r, d;                                       // deklaracija baze, rezultata i varijable za odluku racunanja
    double r1;                                                  // ako je potencija negativna, rezultat je double ne int


    cout << "Upisite bazu: ";                                   // ispis na ekran
    cin >> b;                                                   // učitavanje sa tastature

    cout << "Upisite potenciju: ";                              // ispis na ekran
    cin >> p;                                                   // učitavanje sa tastature

    d = Decision(p);

    if(d == 0) {

        r= Rekurzija(b,p);
        cout << b << " na " << p << " je: " << r << endl;
    }

    else if(d == -1) {

        p = -(p);
        r1 =(double) 1 / (Rekurzija(b,p));
        cout << b << " na " << p << " je: " << r1 << endl;
    }

    else { 

        r = 1;
        cout << b << " na " << p << " je: " << r << endl;
    }
    

    return 0;
}

int Decision (int p) {

    if(p < 0) 
        return -1;

    else if(p == 0) 
        return 1;

    else 
        return 0;
}

int Rekurzija (int b , int p) {

    if(p == 0)
        return 1;

    else {

        p--;
        return b * Rekurzija(b , p);
    }
}