#include <iostream>
using namespace std;

class Registracija {

    private:

        int reg1;
        int reg2;

    public:

        Registracija();
        void Set(int temp1, int temp2);
        void Ispisi();
};

Registracija::Registracija() {

    reg1 = 000;
    reg2 = 000;
}

void Registracija::Set(int temp1, int temp2) {


    if(temp1 < 0)
        reg1 = 000;
    else 
        reg1 = temp1;

    if(temp2 < 0)
        reg2 = 000;
    else 
        reg2 = temp2;
}

void Registracija::Ispisi() {

    cout << "Vasa regitsracija je : " << reg1 << "-" << reg2 << endl;
}

int main() {

    Registracija r;

    r.Set(534,234);

    r.Ispisi();

    return 0;
}