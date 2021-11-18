
#include <iostream>
using namespace std;

int rekurzija(int,int);

int main() {

    unsigned int i; // deklaracija brojača i
    unsigned int p; // deklaracija potencije
    unsigned int b, r; // deklaracija baze i rezultata

    cout << "Upisite bazu:"; // ispis na ekran
    cin >> b; // učitavanje sa tastature

    cout << "Upisite potenciju:"; // ispis na ekran
    cin >> p; // učitavanje sa tastature

    r= rekurzija(b,p);

    cout << b << " na " << p << " je: " << r << endl;

    return 0;
}

int rekurzija (int b , int p) {

    if(p == 0)
        return 1;

    else {

        p--;
        return b * rekurzija(b , p);
    }

}