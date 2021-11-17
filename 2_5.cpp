#include <iostream>
using namespace std;

class Razlomak {

    private:

        int brojnik;
        int nazivnik;

    public:

        Razlomak();
        void Set(int tempBr , int tempNaz);
        double GetDecimal();
};

Razlomak::Razlomak() {

    brojnik = 0;
    nazivnik = 1;
}

void Razlomak::Set(int tempBr , int tempNaz) {

    brojnik = tempBr;

    if(tempNaz == 0) {

        nazivnik = 1;
        cout << "Doslo je do greske. Nazivnik ne smije biti nula!" << endl;
    } 

    else 
        nazivnik = tempNaz;
}

double Razlomak::GetDecimal() {

    double rezultat = 0;

    rezultat = (double) brojnik/nazivnik;

    return rezultat;
}

int main() {

    Razlomak raz;
    int temp1 = 0 , temp2 = 0;                              //temp1-privremena vrijednost brojnika   
                                                            //temp2.privremena vrijednost nazivnika
    cout << "Unesite vrijednost brojnika:" << endl;
    cin >> temp1;

    cout << "Unesite vrijednost nazivnika:" << endl;
    cin >> temp2;

    raz.Set(temp1,temp2);

    cout << "Vas razlomak je : " << temp1 << "/" << temp2 << endl;

    cout << "Decimalna vrijednost vaseg razlomka je : " << raz.GetDecimal() << endl; 

    return 0;
}