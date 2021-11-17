#include <iostream>
using namespace std;

class Tocka {

    private:

        double x;
        double y;

    public:

        inline Tocka();
        Tocka(double temp1 , double temp2);
        friend double Udaljenost(Tocka t1, Tocka t2);

};

Tocka::Tocka() {

    x = 0.0;
    y = 0.0;
}

Tocka::Tocka(double temp1 , double temp2) {

    x = temp1;
    y = temp2;
}

double Udaljenost(Tocka t1 , Tocka t2) {

    double rezultat = 0.0;

    rezultat = sqrt( (t1.x - t2.x) * (t1.x - t2.x) + (t1.y - t2.y) * (t1.y - t2.y) );

    return rezultat;
}


int main() {

    Tocka t1(1.4,4.3);
    Tocka t2(5.7,-3.8);

    cout << "Vasa udaljenost je : " << Udaljenost(t1,t2) << endl;

    return 0;
}