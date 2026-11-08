#include <iostream>

class Bil {
public:
    int modellAr;
    int matarstallning;

    // Konstruktor med initialiseringslista
    Bil(int modellAr, int matarstallning)
        : modellAr(modellAr), matarstallning(matarstallning) {

        std::cout << "Bil fran " << modellAr << " skapad.\n";
    }

    // Destruktor
    ~Bil() {
        std::cout << "Bilen fran " << modellAr << " skrotas.\n";
    }


    void kor(int km) {
        matarstallning += km;
    }


    void skrivUt() const {
        std::cout << "Modellår: " << modellAr << "\n";
        std::cout << "Mätarställning: " << matarstallning << " km\n";
    }
};

int main() {


    Bil bil1(2010, 11000);
    Bil bil2(2020, 5000);


    bil1.kor(150);
    bil2.kor(300);


    bil1.skrivUt();
    bil2.skrivUt();

    return 0;
}