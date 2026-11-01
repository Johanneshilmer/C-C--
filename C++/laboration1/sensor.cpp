#include <iostream>

class Sensor {
public:
    int id = 0;
    double varde = 0.0;

    void skrivUt() const {
        std::cout << "Sensor ID: " << id
                  << ", Varde: " << varde << "\n";
    }
};

int main() {

    Sensor sensorer[5];

    // Läs in värden
    for (int i = 0; i < 5; i++) {
        std::cout << "Ange varde for sensor " << i << ": ";
        std::cin >> sensorer[i].varde;

        sensorer[i].id = i;
    }

    // Skriv ut sensorer
    for (int i = 0; i < 5; i++) {
        sensorer[i].skrivUt();
    }

    return 0;
}