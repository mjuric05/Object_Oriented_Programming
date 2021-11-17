#include <iostream>
using namespace std;

class Tocka {

    private:

        double x;
        double y;

    public:

        Tocka();
        Tocka(double temp1 , double temp2);
        double Udaljenost(Tocka t);

};

Tocka::Tocka() {

    x = 0.0;
    y = 0.0;
}

Tocka::Tocka(double temp1 , double temp2) {

    x = temp1;
    y = temp2;
}

double Tocka::Udaljenost(Tocka t) {

    double rezultat = 0.0;

    rezultat = sqrt( (x - t.x) * (x - t.x) + (y - t.y) * (y - t.y) );

    return rezultat;
}


int main() {

    Tocka t1(1.4,4.3);
    Tocka t2(5.7,-3.8);

    cout << "Vasa udaljenost je : " << t1.Udaljenost(t2) << endl;

    return 0;
}